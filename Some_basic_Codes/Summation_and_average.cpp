#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    float sum=0;
    float avg;
    cout<<"Enter Array 10 Elements: ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"\nDisplay The Numbers: ";
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nSummation of Elements: "<<sum<<endl;
    avg=sum/10;
    cout<<"Average of Elements: "<<avg<<endl;

}