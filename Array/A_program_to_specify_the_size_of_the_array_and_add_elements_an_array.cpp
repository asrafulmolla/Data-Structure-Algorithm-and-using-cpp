#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nElements of Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
