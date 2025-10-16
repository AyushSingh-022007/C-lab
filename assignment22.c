//Declare a local variable inside a function and try to access it outside the function. 
//Compare this with accessing the global variable from within the function.

#include<stdio.h>

int x = 10;

void Function() {
    int y = 20;
    printf("Inside Function:\n");
    printf("Global variable = %d\n", x); 
    printf("Local variable  = %d\n", y);
}

int main() {
    printf("Inside main:\n");
    printf("Global variable = %d\n", x);
    printf("Local variable not accessible\n");
    Function();
    return 0;
}