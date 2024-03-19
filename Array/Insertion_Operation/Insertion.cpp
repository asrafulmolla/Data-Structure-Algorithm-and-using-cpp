#include <iostream>
using namespace std;
int main()
{
  int n,num,position,temp=0,index;
  cout << "\nEnter the size of an array: ";
  cin >> n;
  int a[n];
  cout << "Enter array elements:\n";
  for (int i = 0; i < n; i++)
  cin >> a[i];
  cout << "Enter the insertion index position of an array: ";
  cin >> index;
  cout << "\nEnter element to be inserted: ";
  cin >> num;
  for(int i=index;i<n+1;i++)
  {
      temp=a[i];
      a[i]=num;
      num = temp;
  }
  cout << "New Array after Insertion:"<<endl;
  for (int i=0; i<(n+1); i++)
  {
      cout << a[i] << " ";
  }
  return 0;
}
