//Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address.
#include<stdio.h>
int main()
{
    int k= 30;
    float b = 1.5;
    char l = 'c';
    int *i = &k;
    float *j = &b;
    char *z = &l;

    printf("*i = %d\n", *i);
    printf("*j = %.1f\n", *j);
    printf("*z = %c\n", *z);

    printf("k=%d\n",k);
    printf("b=%.1f\n", b);
    printf("l=%c\n", l);
    return 0;
}
