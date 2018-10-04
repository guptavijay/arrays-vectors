// codechef problem
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int> v;                // ascii values vactor
        vector<int> v1;              //position of characters of string
    for(int i=0;i<s.size();i++)
    {
        v.push_back(int(s[i]));
    }

        string s2;                                // final string
    string s1="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            s2.push_back(s1[j]);
        }
    }
    string s3;
    //cout<<s2.size()<<endl;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(s[i]==s1[j])
            {
                v1.push_back(j);
                break;
            }
        }
    }
    for(int k=0;k<v1.size();k++)
    {
      //  cout<<v1[k]+v[k]<<" ";
        cout<<s2[v1[k]+v[k]];
    }
    cout<<endl;
    }

    return 0;
}
