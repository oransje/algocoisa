#include <stdio.h>
#include "sorts.h"

void print_array(int a[], unsigned int len);

int main() {
    const int size = 6;
    int a[size] = {5, 2, 4, 6, 1, 3};
    insertion_sort_decreasing(a, size);
    print_array(a, size);
    return 0;
}

void print_array(int a[], unsigned int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}