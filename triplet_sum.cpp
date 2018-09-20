
//triplet sum in O(n^2)

#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
void input(vector<int> &v, int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    vector<int> v;
	    input(v,n);
	    int cnt=0;
	    sort(v.begin(),v.end());   //sort the vector 
	    for(int i=0;i<(n-2);i++)
	    {
	        int j=i+1;
	        int k=n-1;
	        while(j<k)
	        {
	            if(v[i]+v[j]+v[k]==sum)
	        {
	            cnt++;
	            break;
	        }
	        else if(v[i]+v[j]+v[k] < sum)
	        {
	            j++;
	        }
	        else
	        {
	            k--;
	        }  
	        }
	        if(cnt>0)
	        {
	            break;
	        }
	        
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
