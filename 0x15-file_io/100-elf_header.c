#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * elf_check - Checks if a file is an ELF file
  * @ident: Argument pointer
  */

void elf_check(unsigned char *ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (
			ident[idx] != 127 &&
			ident[idx] != 'E' &&
			ident[idx] != 'L' &&
			ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
  * magic_print - Print the magic numbers of the ELF header
  * @ident: A pointer to the array of magic numbers
  */

void magic_print(unsigned char *ident)
{
	int idx;

	printf(" Magic: ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", ident[idx]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
  * print_class - prints the class which belongs to the ELF header
  * @ident: A pointer to the array of ELF class
  */

void print_class(unsigned char *ident)
{
	printf(" class:			");

	switch (ident[EI_CLASS])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
  * data_print - Prints data
  * @ident: A pointer to the array
  */

void data_print(unsigned char *ident)
{
	printf(" Data: 			");

	switch (ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
  * print_version - Prints the version
  * @ident: A pointer to the array
  */

void print_version(unsigned char *ident)
{
	printf(" Version:		%d", ident[EI_VERSION]);

	switch(ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("  (curent)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
  * osabi_print - Prints OS/ABI
  * @ident: A pointer to the array
  */

void osabi_print(unsigned char *ident)
{
	printf("  OS/ABI:		");

	switch (ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
  * print_type - Prints type
  * @type: eLF Type
  * @ident: A pointer to array
  */

void print_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf(" Type: 		");
