#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"\nEnter Two Dimensional Array Size M and N: ";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the Array elements: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nShown Your Array: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
