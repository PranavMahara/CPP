// This is a C Programming File MIND IT :)

#include <stdio.h>
#include <stdlib.h>

int compareIntegers(const void *a, const void *b){
    const int *x = a;
    const int *y = b;
    return *x - *y;
}

main(){

    int myArray[] = {97, 59, 2, 83, 19, 97};
    int numberOfElements = sizeof(myArray) / sizeof(int);

    printf("Before sorting - \n");
    for (int i = 0; i < numberOfElements; i++)
        printf("%d ", *(myArray + i));

    qsort(myArray, numberOfElements, sizeof(int), compareIntegers);

    printf("\n\nAfter sorting - \n");
    for (int i = 0; i < numberOfElements; i++)
        printf("%d ", *(myArray + i));

    return 0;
}