#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    cout<<"Find out the Largest number. Choice: 1. "<<endl;
    cout<<"Find out the Minimum number. Choice: 2. \n";
    cout<<"Choice the operation: ";
    cin>>choice;
    int n;
        cout<<"Enter the Array size: ";
        cin>>n;
        int a[n];
        cout<<"Enter the array elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    switch (choice)
    {
    case 1:
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[0])
            {
                a[0]=a[i];
            }
        }
        cout<<"Largest number of an array: "<<a[0];
        break;
    
    case 2:
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[0])
            {
                a[0]=a[i];
            }
        }
        cout<<"Minimum number of an array: "<<a[0];
        break;
    }
    
}