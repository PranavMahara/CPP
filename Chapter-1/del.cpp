// This is a C Programming File MIND IT :)

#include <stdio.h>
#include <conio.h>

void add(float *a, float *b){
    float c = *a + *b;
    printf("Addition gives %.2f\n", c);
}

void subtract(float *a, float *b){
    float c = *a - *b;
    printf("Subtraction gives %.2f\n", c);
}

void multiply(float *a, float *b){
    float c = *a * *b;
    printf("Multiplication gives %.2f\n", c);
}

void divide(float *a, float *b){
    float c = *a / *b;
    printf("Division gives %.2f\n", c);
}

int main(){
    printf("Enter two numbers : ");
    float a, b;
    scanf("%f %f", &a, &b);
    printf("What do you want to do with the numbers?\nAdd : a\nSubtract : s\nMultiply : m\nDivide : d\n");
    char operation = '0';
    operation = getche();
    void (*p[])(float *, float *) = {add, subtract, multiply, divide};
    printf("Operating...\n\n");

    switch (operation){
    case 'a':
        p[0](&a, &b);
        break;
    case 's':
        p[1](&a, &b);
        break;
    case 'm':
        p[2](&a, &b);
        break;
    case 'd':
        p[3](&a, &b);
        break;
    default:
        printf("Invalid input!!!\n");
    }
}