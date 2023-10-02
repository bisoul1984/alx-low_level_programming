#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header_info(const char *file_name) {
    int fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        print_error("Unable to open the ELF file");
    }

    // Read the ELF header
    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Unable to read ELF header");
    }

    // Check if it's an ELF file
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || 
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }

    // Print ELF header information
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\nClass: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown");
    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

    printf("Type: %d\n", elf_header.e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    display_elf_header_info(argv[1]);

    return 0;
}
