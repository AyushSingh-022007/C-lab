#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("text.txt","r");
    char ch;
    //fprintf(ptr,"%c",'m');
    //fprintf(ptr,"%c",'a');
    //fprintf(ptr,"%c",'n');
    //fprintf(ptr,"%c",'g');
    //fprintf(ptr,"%c",'o');
    //fscanf(ptr,"%c",&ch);
    //printf("%c",ch);
    //fscanf(ptr,"%c",&ch);
    //printf("%c",ch);
    //fscanf(ptr,"%c",&ch);
    //printf("%c",ch);
    //fscanf(ptr,"%c",&ch);
    //printf("%c",ch);
    //fscanf(ptr,"%c",&ch);
    //printf("%c",ch);
    fclose(ptr);
    return 0;
}