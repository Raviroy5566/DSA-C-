#include<stdio.h>
#include<string.h>
int main ()
{
    char a[]="hello";
    char t[]="world";
    strcat(a,t);
    printf("string=%s",a);
    return 0;
}
