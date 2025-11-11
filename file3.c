//Open a file, read its content line by line, and display each line on the console.
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("labtext.txt","r");
    char ch[10];
    if(ptr==NULL)
    {
        printf("NOT exists");
        return 0;
    }
    while (fgets(ch,10,ptr)!=NULL)             //by making the array have less space it only works till the memory is occupied
    {                 
        printf("%s",ch);                        //by using eof and\n its becoming an infinite loop                                                                                     
    }                                           //eof is for char
    fclose(ptr);
    return 0;
}