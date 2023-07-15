#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char *av[]);
void close_file(int fildes);
char *def_cont(char *file);
/*void print_error_exit(char *msg);*/
/*void print_elf_header_info(Elf32_Ehdr *header);*/
void check_format(unsigned char *e_ident);
void get_magic_num(unsigned char *e_ident);
void get_class(unsigned char *e_ident);
void get_data(unsigned char *e_ident);
void get_version(unsigned char *e_ident);
void get_abi(unsigned char *e_ident);
void get_osabi(unsigned char *e_ident);
void get_type(unsigned int e_type, unsigned char *e_ident);
void get_entry_addr(unsigned long int e_entry, unsigned char *e_ident);

#endif
