#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6};
    int *p=x;
    int multi=1;
    for(int i=0;i<6;i++)
    {
        multi=multi*(*(p+i));
    }
    printf("%d",multi);
    return 0;
}