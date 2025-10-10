// Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.
#include <stdio.h>
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