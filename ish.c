#include<stdio.h>
int main()
{
    FILE *fp;
    char text[100];
    fp=fopen("ips.txt","r");
    if(fp==NULL)
    {
        printf("empty");
        
        return 0;
    }
    else
    {
        fprintf(fp,"hie");
        fgets(text,50,fp);
        printf("%s",text);  
        fclose(fp);
    }
    return 0;
}