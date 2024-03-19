#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,last;
    cout<<"\nEnter value of Start program to generate number: ";
    cin>>start;
    cout<<"Enter value of Last number of program to generate number: ";
    cin>>last;
    for(int i=start;i<=last;i++)
    {
        cout<<i<<endl;
    }

    /*
    alternative way
    int i=start;
    while(i<=last)
    {
        cout<<i<<endl;
        i++;
    }
    */

}
