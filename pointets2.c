//Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.
#include <stdio.h>
int main()
{
    int k= 30;
    float b = 1.5;
    char l = 'c';

    int *i = &k;
    float *j = &b;
    char *z = &l;
    (*i)++;
    printf("value of i %d\n",k);
    printf("orginal address of i:%p\n",i);
    printf("orginal address  of j:%p\n",j);
    printf("orginal address of z:%p\n",z);
    i++;
    j++;
    z++;
    printf("After increment address of i:%p\n",i);
    printf("After increment address of j:%p\n",j);
    printf("After increment address of z:%p\n",z);
    i--;
    j--;
    z--;
    printf("After decrement address of i :%p\n",i);
    printf("After decrement address of j:%p\n",j);
    printf("After decrement address of z:%p\n",z);
    return 0;
}