#include<stdio.h>

int main(){
    int x =300;
    for(x=0;x<3;x++){
        printf("first=%d\t",x++);
    }
    printf("\nsecond=%d",x);
    return 0;
}