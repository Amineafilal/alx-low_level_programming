#include "main.h"

/**
 * print_elf_header_info - Write a function that print ELF information.
 * @header: struct of EFL.
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
	size_t i;

	printf("Magic:   ");
	for (i = 0; i < sizeof(header->e_ident); ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %s\n",
			(header->e_ident[4] == 1) ? "ELF32" :
			((header->e_ident[4] == 2) ? "ELF64" : "Invalid Class"));
	printf("Data:    %s\n",
			(header->e_ident[5] == 1) ? "2's complement, little endian" :
			((header->e_ident[5] == 2) ? "2's complement, big endian" :
			 "Invalid Data"));
	printf("Version: %d\n", header->e_ident[6]);
	printf("OS/ABI:  %s\n",
			(header->e_ident[7] == 0) ? "UNIX - System V" :
			((header->e_ident[7] == 1) ? "HP-UX" :
			 ((header->e_ident[7] == 255) ? "Standalone (embedded)" :
			  "Unknown OS/ABI")));
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type:    %s\n",
			(header->e_type == 1) ? "EXEC (Executable file)" :
			((header->e_type == 2) ? "DYN (Shared object file)" :
			 ((header->e_type == 3) ? "REL (Relocatable file)" :
			  "Invalid Type")));
	printf("Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - Entry point.
 * @argc: input value.
 * @argv: input value.
 * Return: return 0.
*/
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	const char *filename;
	int fd = 0;
	ssize_t bytes_read = read(fd, &header, sizeof(header));

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}
	if (bytes_read == -1)
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	else if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: Incomplete read of ELF header\n");
		close(fd);
		exit(98);
	}
	if (header.e_ident[0] != 0x7F ||
			header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' ||
			header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
