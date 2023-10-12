#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *start, size_t num_bytes) {
    for (size_t i = 0; i < num_bytes; i++) {
        printf("%02x", start[i]);
        if (i < num_bytes - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        fprintf(stderr, "Error\n");
        return 2;
    }

    unsigned char *main_start = (unsigned char *)main;
    print_opcodes(main_start, (size_t)num_bytes);

    return 0;
}

