//boost library

    // squares in N*N matrix or chess

#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cpp_int x=0;

	    for(int i=1;i<=n;i++)
	    {
	      x=x+ (i*i);
	    }
	    cout<<x<<endl;
	}
	return 0;
}
