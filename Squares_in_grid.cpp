// total squares in a N * M grid
// 4*3 grid have 20 squares
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
	    int n,m;
	    cpp_int x=0;
	    cin>>n>>m;
	     if(n<m)
	     {
	         x=x+(n*m);
	         for(int i=1;i<n;i++)
	         {
	             x=x+ ((n-i)*(m-i));
	         }
	         cout<<x<<endl;
	     }
	     else if(n==m)
	     {
	         for(int i=1;i<=n;i++)
	         {
	             x=x+(i*i);
	         }
	         cout<<x<<endl;
	     }
	     else 
	     {
	         x=x+(n*m);
	         for(int i=1;i<m;i++)
	         {
	             x= x+ ((n-i)*(m-i));
	         }
	         cout<<x<<endl;
	     }
	}
	return 0;
}
