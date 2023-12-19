#include<stdio.h>

int main() {
    
    int x = 20;
    int *p = &x;
    
    printf("The value of x: %d\n", x);
    printf("The memory address of variable x is: %p\n", p);
    printf("The value saved in pointer p: %d\n", *p);
    
    *p = 500;
    
    printf("The value after updating: %d\n", *p);
    
    return 0;
}
