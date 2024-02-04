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
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            cout<<num<<" Found the location a["<<i<<"]";
            break;
        }
       
    
    }
     if(i==n)
        {
            cout<<num<<" Value not found.";
        }

}
