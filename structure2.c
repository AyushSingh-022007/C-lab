#include <stdio.h>
#include <String.h>
struct Display(structt);
struct student Display(struct student s1)
{
    struct student{
    int rollno;
    char name[100];
}s1;
    printf("Name is %s:",s1.name);
    printf("Roll no is %d:",s1.rollno);
}
int main()
{
    s1.rollno=12;
    strcpy(s1.name,"Ayush");
    Display(s1);
}