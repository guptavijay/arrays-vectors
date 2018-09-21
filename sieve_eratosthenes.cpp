// to find prime numbers till N
// 1 is not a prime number


#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool arr[n+1];
	    memset(arr,true,sizeof(arr));                         //set all array elements to true
	    for(int i=2;(i*i<=n);i++)                              // start with 2
	    {
	        if(arr[i])
	        {
	            for(int j=i*2;j<=n;j=j+i)                           //mark all multiples to false
	            {
	                arr[j]=false;
	            }
	        }
	    }
	    for(int i=2;i<=n;i++)
	    {
	        if(arr[i])
	        {
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
