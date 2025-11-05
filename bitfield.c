#include <stdio.h>
struct student
{
    int error:1;
};
int main()
{
    struct student e1;
    printf("%d\n",sizeof(e1.error));
    printf("%d\n",sizeof(e1));
}

    
    
    

