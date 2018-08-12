#include <stdio.h>
#include <stdlib.h>
#include "sin_helpers.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "USAGE: validate_sin sin_number\n");
        return 1;
    }

    int sin_number_array[9];
    if (populate_array(strtol(argv[1], NULL, 10), sin_number_array) == 1) {
        printf("Invalid SIN\n");
        return 1;
    }
    if (check_sin(sin_number_array) == 1) {
        printf("Invalid SIN\n");
        return 1;
    } else {
        printf("Valid SIN\n");
        return 0;
    }
}
