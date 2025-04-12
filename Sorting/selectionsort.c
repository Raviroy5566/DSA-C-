/*#include<stdio.h>
#include<limits.h>
int main()
{int arr[7]={7,4,5,9,8,2,1};
  int n=7;
  printf("unsorted aaray is\n");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
   }
    for(int i=0;i<n-1;i++){
       int min = INT_MAX;
       int minidx = -1;
       for(int j=i;j<=n-1;j++){
          if(min>arr[j]){
             min = arr[j];
             minidx = j ;
           }

        } 
        int temp =arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("sorted array is\n");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
   }
   return 0;
} */
#include<stdio.h>
int main ()
{ int arr[5]={5,7,9,3,8};
   int n=5;
   for(int i=0;i<n-1;i++)
   {  int min = 0;  
   for(int j=i+1; j<=n-1;j++){
       if(arr[j]<arr[min]){
         min=j;
       }
   } 
  if (min!=i)
  { int temp=arr[i];
  arr[i]=arr[min];
  arr[min]=temp;   

  }for(int i=0;i<=n-1;i++){
   printf("%d",arr[i]);
  }
  return 0;
   }




} 