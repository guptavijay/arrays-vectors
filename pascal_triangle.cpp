

// pascal triangle in O(n^2) and O(1) space
// start with line 1  
// every line have elements equal to line number



#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n=7;
    for(int i=1;i<=n;i++)               // for every line
    {
        ll int c=1;
        for(int j=1;j<=i;j++)     // for positions in every line
        {
                                   //first elemnet is always 1
            cout<<c<<" ";
            c= c*(i-j)/j;
          
        }
        cout<<endl;
    }
    return 0;
}
