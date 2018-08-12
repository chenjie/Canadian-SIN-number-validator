#include <stdio.h>

int populate_array(int sin_number_int, int *sin_number_array) {
    int sin_number = sin_number_int;
    for (int i = 8; i >= 0; i--) {
        if (sin_number == 0) {
            return 1;
        }
        sin_number_array[i] = sin_number % 10;
        sin_number /= 10;
    }
    return 0;
}

int check_sin(int *sin_number_array) {
    if (sin_number_array[0] == 0) return 1;
    int acc = 0;
    for (int i = 0; i < 9; i++) {
        if (i % 2 == 0) {
            acc += sin_number_array[i];
        } else {
            int double_result = sin_number_array[i] * 2;
            if (double_result / 10 == 0) {
                acc += double_result;
            } else {
                acc += (double_result % 10) + (double_result / 10);
            }
        }
    }
    if (acc % 10 == 0) {
        return 0;
    } else {
        return 1;
    }
}
