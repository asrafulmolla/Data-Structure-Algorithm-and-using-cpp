#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter arrau elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Array elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}