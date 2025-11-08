//Write a program to create a new file and write text into it.
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("labtext.txt","w");
    if(ptr==NULL)
    {
        printf("NOt exists");
        return 0;
    }
    else
    {
        fprintf(ptr,"My name is  Ayush");
        fclose(ptr);

    }
    return 0;

}