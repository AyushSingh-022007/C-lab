// Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.
#include <stdio.h>
void point(int *k, int *b)
{
    *k = *k + 1;
    *b = *b + 2;
}
int main()
{
    int x = 50, y = 80;
    printf("Before operating values\n");
    printf("x= %d,y=%d\n", x, y);
    point(&x, &y);
    printf("After operating values\n");
    printf("x= %d,y=%d", x, y);
    return 0;
}