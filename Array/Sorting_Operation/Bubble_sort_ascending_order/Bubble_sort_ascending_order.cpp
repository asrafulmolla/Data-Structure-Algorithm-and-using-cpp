#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter your Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}