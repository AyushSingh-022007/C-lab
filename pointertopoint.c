#include<stdio.h>
int main()
{
    int x=20;
    int *p=&x;
    int **q=&p;
    printf("%d\n",x);
    printf("%u\n",p);
    printf("%u\n",*q);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%p\n",q);

}