#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size) {
    int n;
    for (n = 0; n < size; n++) {
        if (array[n] == key) {
            return n; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main(void) {
    int a[SIZE];
    int x;
    int searchKey;
    int element;

    for (x = 0; x < SIZE; x++) {
        a[x] = 2 * x; // Initializing array elements as multiples of 2
    }

    printf("Enter integer search key:\n");
    scanf_s("%d", &searchKey);

    element = linearSearch(a, searchKey, SIZE);

    if (element != -1) {
        printf("Found value in element %d\n", element);
    }
    else {
        printf("Value not found\n");
    }

    system("pause");
    return 0;
}
