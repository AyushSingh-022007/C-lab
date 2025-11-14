#include <stdio.h>
void calculate_the_maximum(int n, int k) {
    int fact=(n*(n-1))/2;
    int and[fact],xor[fac t],or[2000],count=0;
for(int i=1;i<=n;i++)
{
    for(int j=i+1;j<=n;j++)
    {
        and[count]=i&j;
        or[count]=i|j;
        xor[count]=i^j;
        count++;
    }
}
int maxa=0,maxo=0,maxx=0;
for(int i=0;i<count;i++)
{
    if(and[i]<k)
        maxa=maxa<and[i]?and[i]:maxa;
    
    if(or[i]<k)
        maxo=maxo<or[i]?or[i]:maxo;
    
    if(xor[i]<k)
        maxx=maxx<xor[i]?xor[i]:maxx;
    
    printf("%d\n%d\n%d\n",maxa,maxo,maxx);
    printf("%d\n%d\n%d\n",and[i],or[i],xor[i]);
}
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
