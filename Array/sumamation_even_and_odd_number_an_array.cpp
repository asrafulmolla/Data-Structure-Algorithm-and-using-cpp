#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    int even_sum=0,odd_sum=0;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even_sum+=a[i];
        }
        else
        {
            odd_sum+=a[i];
        }
    }
    cout<<"Summation of even number an array: "<<even_sum<<endl;
    cout<<"Summation of odd number an array: "<<odd_sum<<endl;
}