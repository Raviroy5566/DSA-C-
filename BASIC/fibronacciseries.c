#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3;
    printf("%d%d",n1,n2);
    for(int i=0;i<=5;i++)
        n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
    return 0;

}
