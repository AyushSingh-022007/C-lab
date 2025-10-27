#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=5;
    int *p;
    p=(int*)malloc(i*sizeof(int));
    printf("%d",sizeof(*p));
    printf("%d",sizeof(p));
    return 0;
}