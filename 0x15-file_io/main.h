#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct Elf64_Ehdr - ELF structure (64 bits)
 * @e_ident: ELF identification bytes.
 * @e_type: Object file type.
 * @e_machine: Machine type.
 * @e_version: Object file version.
 * @e_entry: Entry point virtual address.
 * @e_phoff: Program header table offset.
 * @e_shoff: Section header table offset.
 * @e_flags: Processor-specific flags.
 * @e_ehsize: ELF header size.
 * @e_phentsize: Size of a program header table entry.
 * @e_phnum: Number of entries in the program header table.
 * @e_shentsize: Size of a section header table entry.
 * @e_shnum: Number of entries in the section header table.
 * @e_shstrndx: Index of the section header.
*/
typedef struct
{
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned int e_version;
	unsigned long e_entry;
	unsigned long e_phoff;
	unsigned long e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
}Elf64_Ehdr;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
