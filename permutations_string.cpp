
// n! number of permutaions of a string of size n


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> v;
void permute(string s, int l ,int r,int cnt, int cnt1)
{   
    if(cnt==cnt1)
    {
        return;
    }
    if(l==r)
    {
        //cout<<s<<" ";
        v.push_back(s);
        cnt++;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
             swap(s[l],s[i]);
             permute(s,l+1,r,cnt,cnt1);
             swap(s[l],s[i]);          //backtrack
        }
       
    }
    
}
ll int fact(int n)
{
    int x=1;
    for(int i=n;i>=1;i--)
    {
        x*=i;
    }
    return x;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    if(v.size()>0)
	    {
	        v.erase(v.begin(),v.end());
	    }
	    string s;
	    cin>>s;
	    int cnt=0;
	    ll int cnt1=fact(s.size());
	    int n=s.size()-1;
	    permute(s,0,n,cnt,cnt1);
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
