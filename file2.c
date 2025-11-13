//Open an existing file and read its content character by character, and then close the file.
#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("labtext2.txt","r");
    if(ptr==NULL)
    {
        printf(" Not exists");
    }
    else
    {
        while((ch=fgetc(ptr))!=EOF)
        {
           printf("%c",ch);              //printing while reading
           
        }
    } 
    fclose(ptr);
    return 0;
}