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
void close_fildes(int fildescr);
char *def_contain(char *file);
/*void print_error_exit(char *msg);*/
/*void print_elf_header_info(Elf32_Ehdr *header);*/
void format_check(unsigned char *e_ident);
void get_magic_numb(unsigned char *e_ident);
void get_classs(unsigned char *e_ident);
void get_pros_data(unsigned char *e_ident);
void get_elf_version(unsigned char *e_ident);
void get_elf_abi(unsigned char *e_ident);
void os_abi_cap(unsigned char *e_ident);
void get_elf_type(unsigned int e_type, unsigned char *e_ident);
void get_entry_addrs(unsigned long int e_entry, unsigned char *e_ident);

#endif
