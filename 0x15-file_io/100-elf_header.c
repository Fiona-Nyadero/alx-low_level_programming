#include "main.h"

/**
 * check_format - checks for ELF file.
 * @e_ident: points to an array of ELF magic numbers.
 *
 * Return: always 0.
 * or exit with ERROR msg, code 98.
 */
void check_format(unsigned char *e_ident)
{
	int l;

	for (l = 0; l < 4; l++)
	{
		if (e_ident[l] != 127 && e_ident[l] != 'E' &&
				e_ident[l] != 'L' && e_ident[l] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * get_magic_num - prints the magic numbers of an ELF_H
 * @e_ident: points to an array of ELF magic numbers
 *
 * Return: always 0
 */
void get_magic_num(unsigned char *e_ident)
{
	int num;

	printf("  Magic:   ");

	for (num = 0; num < EI_NIDENT; num++)
	{
		printf("%02x", e_ident[num]);

		if (num == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * get_class - Prints the identified binary architecture(class) of ELF_H
 * @e_ident: points to an array of the ELF classes.
 *
 * Return: always 0.
 */
void get_class(unsigned char *e_ident)
{
	printf("  Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("                            Invalid\n");
		break;
	case ELFCLASS32:
		printf("                            ELF32\n");
		break;
	case ELFCLASS64:
		printf("                            ELF64\n");
		break;
	default:
		printf("                            <unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_data - prints the encoded data of processor in ELF_H (endianness)
 * @e_ident: points to an array of ELF processor data.
 *
 * Return: always 0.
 */

void get_data(unsigned char *e_ident)
{
	printf("  Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("                             Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("                             2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("                             2's complement, big endian\n");
		break;
	default:
		printf("                             <unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_version - prints the version specification in ELF_H
 * @e_ident: points to an array of ELF versions
 *
 * Return: always 0.
 */
void get_version(unsigned char *e_ident)
{
	 printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	case 2:
		printf(" (current)\n");
		break;
	default:
		printf(" (invalid)\n");
		break;
	}
}

/**
 * get_osabi - prints the identified OS/ABI in ELF_H
 * @e_ident: points to an array of ELF OS/ABI identifiers
 *
 * Return: Always 0
 */
void get_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("                            UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("                            UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("                            UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("                            UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("                            UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("                            UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("                            UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("                            UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("                            ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("                            Standalone App\n");
		break;
	default:
		printf("                            <unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * get_abi - prints the target ABI version in ELF_H
 * @e_ident: points to an array of ELF ABI versions
 *
 * Return: Always 0.
 */
void get_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * get_type - prints the identified type in ELF_H
 * @e_type: ELF type
 * @e_ident: points to an array of ELF types
 *
 * Return: Always 0.
 */
void get_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("                             NONE (None)\n");
		break;
	case ET_REL:
		printf("                             REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("                             EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("                             DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("                             CORE (Core file)\n");
		break;
	default:
		printf("                             <unknown: %x>\n", e_type);
	}
}

/**
 * get_entry_addr - prints the virtual address in ELF_H on entry
 * @e_entry: virtual address of the ELF entry point
 * @e_ident: points to an array of entry options
 *
 * Return: Always 0.
 */
void get_entry_addr(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("              %#x\n", (unsigned int)e_entry);

	else
		printf("              %#lx\n", e_entry);
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @ac: number of arguments supplied to the program.
 * @av: array of pointers to the arguments
 *
 * Return: 0 if success
 * or ERROR messages
 */
int main(int ac __attribute__((__unused__)), char *av[])
{
	Elf64_Ehdr *hdrr;
	int fildes, _read;

	fildes = open(av[1], O_RDONLY);
	if (fildes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	hdrr = malloc(sizeof(Elf64_Ehdr));
	if (hdrr == NULL)
	{
		close(fildes);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	_read = read(fildes, hdrr, sizeof(Elf64_Ehdr));
	if (_read == -1)
	{
		free(hdrr);
		close(fildes);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	check_format(hdrr->e_ident);
	printf("ELF Header:\n");
	get_magic_num(hdrr->e_ident);
	get_class(hdrr->e_ident);
	get_data(hdrr->e_ident);
	get_version(hdrr->e_ident);
	get_osabi(hdrr->e_ident);
	get_abi(hdrr->e_ident);
	get_type(hdrr->e_type, hdrr->e_ident);
	get_entry_addr(hdrr->e_entry, hdrr->e_ident);

	free(hdrr);
	close(fildes);
	return (0);
}
