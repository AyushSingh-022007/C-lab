//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>
void add(int,int);
int x = 10;
int y = 20;

int main(){
    add(x,y);
}

void add(int a,int b){
    int sum;
    sum = a+b;
    printf("x=%d, y=%d\n",x,y);
    printf("sum =%d\n",sum);
}