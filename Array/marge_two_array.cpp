#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter first Array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter second Array size: ";
    cin>>m;
    int b[m];
    int marge[m+n];
    cout<<"Enter first array "<<n<<" elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        marge[i]=a[i];
    }
    cout<<"Enter Second array "<<m<<" elements:";
    for(j=0;j<m;j++,i++)
    {
        cin>>b[j];
        marge[i]=b[j];
    }
    cout<<"Marged array elements:";
    for(i=0;i<n+m;i++)
    {
        cout<<marge[i]<<" ";
    }
}
