#include<stdio.h>

int main(){

   int n, temp, i, j, ar[30];

   printf("Enter number of elements: ");
   scanf("%d",&n);

   printf("Enter %d numbers: ",n);

   for(i=0;i<n;i++)
   scanf("%d",&ar[i]);

   for(i=n-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(ar[j]>ar[j+1]){
           temp=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=temp;
        }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",ar[i]);

   return 0;
}