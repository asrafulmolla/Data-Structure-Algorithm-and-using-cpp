#include<stdio.h>
int main()
{

   int i, j, n, temp, arr[100];

   printf("Enter the number of element in the array: ");
   scanf("%d",&n);

   printf("Enter %d the elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);


   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);

   return 0;
}