#include<stdio.h>
int main()
{
    int i,x,y;
    printf("enter two positive number\n");
     scanf("%d%d",&x,&y);
    i=(x>y)?x:y;
    while(1)
        if( i%x==0 && i%y==0)
    {
        printf("the LCM is %d",i);
        break;
    }
    return 0;
}
