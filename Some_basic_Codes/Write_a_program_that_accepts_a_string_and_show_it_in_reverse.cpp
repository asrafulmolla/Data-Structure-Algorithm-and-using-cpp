#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s1,s2;
    int temp;
    cin>>s1;
    for(int i=0;i<s1.size()/2;i++)
    {
        temp=s1[i];
        s1[i]=s1[s1.size()-i-1];
        s1[s1.size()-i-1]=temp;
    }
    cout<<s1;
}