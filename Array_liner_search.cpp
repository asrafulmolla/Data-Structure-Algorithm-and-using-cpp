#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter your Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter your searching value: ";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            cout<<num<<" Found the location a["<<i<<"]";
        }
        else if(i==n-1)
        {
            cout<<"Value not found.";
        }
       
    }
   
}