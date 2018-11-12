// O(N) - space & time complexity

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	  int l[n];                                         //left array to store highest bar in left
	  int r[n];                                         // right array to store highest bar in right
	  l[0]=v[0];
	  for(int i=1;i<n;i++)
	  {
	      l[i]=max(l[i-1],v[i]);
	  }
	  r[n-1]=v[n-1];
	  for(int i=n-2;i>=0;i--)
	  {
	      r[i]=max(r[i+1],v[i]);
	  }
	  int water=0;
	  for(int i=0;i<n;i++)
	  {
	      water+= min(l[i],r[i])-v[i];                // total water any bar can store
	  }
	  cout<<water<<endl;
	}
	return 0;
}
