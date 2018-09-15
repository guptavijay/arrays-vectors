#include<bits/stdc++.h>
using namespace std;
#define ll long long
void input(vector<ll int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<ll int> v;
    input(v,n);
    ll int sum=0;
    int cnt=0;
    int maxe=*max_element(v.begin(),v.end());
    if(maxe>0)                                            // positive + negative integers or all positive integers maybe
    {
       for(int i=0;i<n;i++)
    {
        if(v[i]>=0)
        {
            sum+=v[i];
            cnt++;
        }
    } 
    cout<<sum<<" "<<cnt<<endl;
    }
    else if(maxe==0)                                    // no positive number
    {
        cout<<"0"<<" "<<"1"<<endl;
    }
    else                                                //no positive number
    {
        cout<<maxe<<" "<<"1"<<endl;
    }
    
    return 0;
}
