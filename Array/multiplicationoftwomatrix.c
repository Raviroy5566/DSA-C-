#include<stdio.h>
int main ()
{int a[2][2],b[2][2],c[2][2],i,j,k;
printf("enter the element of a martrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of b matrix\n");
       for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
       } 
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            int sum = 0;
            for(k=0;k<2;k++){
            sum = sum + a[i][k]*b[k][j]; 
            }      
             c[i][j] = sum;
            

        }
    }
    
    printf("multiplication of matrix c is\n :");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d ",c[i][j]);
            }
        }
    printf("\n");
    return 0;

}
