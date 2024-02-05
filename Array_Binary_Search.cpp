#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mid,low,high,num;
    cout<<"Enter your Array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter your Array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter searching elements: ";
    cin>>num;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<num)
        {
            low=mid+1;
            mid=(low+high)/2;
        }
        else if(a[mid]==num)
        {
            cout<<num<<" Found at a["<<mid<<"]";
            break;
        }
        else{
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(low>high)
    {
        cout<<"Element not found.";
    }
}
