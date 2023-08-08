#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * print_magic - prints the magic bytes of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - prints the class of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data encoding of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	switch (e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("0 (none)\n");
		break;
	case EV_CURRENT:
		printf("1 (current)\n");
		break;
	default:
		printf("%d\n", e_ident[EI_VERSION]);
	}
}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
	case ELFOSABI_GNU:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("TRU64 UNIX\n");
		break;
	case ELFOSABI_ARM:
	case ELFOSABI_AARCH64:
		printf("ARM\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abiversion - prints the ABI version of an ELF header
 * @e_ident: pointer to the e_ident array
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       ");
	printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: the e_type member of Elf64_Ehdr or Elf32_Ehdr struct
 */
void print_type(uint16_t e_type)
{
	char *types[] = {"NONE", "REL", "EXEC", "DYN", "CORE"};

	printf("  Type:                              ");
	if (e_type < 5)
		printf("%s\n", types[e_type]);
	else if (e_type == ET_LOOS)
		printf("LOOS\n");
	else if (e_type == ET_HIOS)
		printf("HIOS\n");
	else if (e_type == ET_LOPROC)
		printf("LOPROC\n");
	else if (e_type == ET_HIPROC)
		printf("HIPROC\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - prints the entry point address of an ELF header
 * @e_entry: the e_entry member of Elf64_Ehdr or Elf32_Ehdr struct
 */
void print_entry(uint64_t e_entry)
{
	printf("  Entry point address:               ");
	printf("%#lx\n", e_entry);
}

/**
 * print_elf_header - prints the information contained in an ELF header
 * @filename: the name of the ELF file
 * @fd: the file descriptor of the ELF file
 */
void print_elf_header(char *filename, int fd)
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint64_t e_entry;
	ssize_t r;

	r = read(fd, e_ident, EI_NIDENT);
	if (r != EI_NIDENT)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", filename);
		exit(98);
	}
	if (e_ident[0] != 0x7f || e_ident[1] != 'E' ||
	    e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - ");
		dprintf(STDERR_FILENO, "it has the wrong magic bytes at the start\n");
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_osabi(e_ident);
	print_abiversion(e_ident);

	if (lseek(fd, 16, SEEK_SET) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot lseek file %s\n", filename);
		exit(98);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		r = read(fd, &e_type, sizeof(uint16_t));
		if (r != sizeof(uint16_t))
		{
			dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", filename);
			exit(98);
		}
		r = read(fd, &e_entry, sizeof(uint32_t));
		if (r != sizeof(uint32_t))
		{
			dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", filename);
			exit(98);
		}
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		r = read(fd, &e_type, sizeof(uint16_t));
		if (r != sizeof(uint16_t))
		{
			dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", filename);
			exit(98);
		}
		r = read(fd, &e_entry, sizeof(uint64_t));
		if (r != sizeof(uint64_t))
		{
			dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", filename);
			exit(98);
		}
	}
	print_type(e_type);
	print_entry(e_entry);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}
	print_elf_header(argv[1], fd);

	close(fd);

	return (0);
}
