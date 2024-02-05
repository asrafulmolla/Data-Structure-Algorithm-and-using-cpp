#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,end,start,e;
    cout<<"Enter your Array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter your Array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter searching elements: ";
    cin>>e;
    start=0;
    end=n-1;
    pos=start+(((end-start)*(e-a[start])/(a[end]-a[start])));
    while(start<=end && e>=a[start] && e<=a[end])
    {
        if(a[pos]<e)
        {
            start=pos+1;
            pos=start+(((end-start)*(e-a[start])/(a[end]-a[start])));
        }
        else if(a[pos]==e)
        {
            cout<<e<<" Found at a["<<pos<<"]";
            break;
        }
        else{
            end=start-1;
            pos=start+(((end-start)*(e-a[start])/(a[end]-a[start])));
        }
    }
    if(start>end)
    {
        cout<<e<<" is not found.";
    }
}