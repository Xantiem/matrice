#include <stdio.h>

#include "matrix.h"

int matrix_flattern(int *arr, int *size) {
    for(int count=0; count < (sizeof(arr) / sizeof(int)); count++) {
        printf("%d", count);
    }
}

int matrix(int arr, int size) {

    return sizeof(arr) / size;
}
int matrix_gen (unsigned short int creation_size) {

}

int main() {
    int size[] = {2};

    int x[3][3] = {{1,1,2},{3,3,4}};
    matrix_flattern(&x, size);

    return 0;
}