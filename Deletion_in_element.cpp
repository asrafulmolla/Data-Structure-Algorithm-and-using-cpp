#include <iostream>
using namespace std;
int main()
{
  int n,num,position,temp=0,index;
  cout << "Enter the size of an array: ";
  cin >> n;
  int a[n];
  cout << "Enter array elements:\n";
  for (int i = 0; i < n; i++)
  {
      cin >> a[i];
  }
  cout << "\nEnter element to be deletion: ";
  cin >> num;
   for(int i=0;i<n;i++)
   {
       if(num==a[i])
       {
           for(int j=i;j<n-1;j++)
           a[j]=a[j+1];
       }

   }
  cout << "New Array after Insertion:"<<endl;
  for (int i=0; i<n-1; i++)
  {
      cout << a[i] << " ";
  }
  return 0;
}

