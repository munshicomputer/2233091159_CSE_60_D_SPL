#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    
    int *p = &x;
    int *q = &y;
    
    printf("The Value of X: %d\n", x);
    printf("The Value of Y: %d\n", y);
    printf("The Memory address of X: %d\n", &x);
    printf("The Memory address of Y: %d\n", &y);
    
    printf("The Value of Pointer *p: %d\n", *p);
    printf("The Value of Pointer *q: %d\n", *q);
    
    printf("The Memory address of Pointer *p: %d\n", &p);
    printf("The Memory address of Pointer *q: %d\n", &q);
}
