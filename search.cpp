// binary search O(log N)
// only applicable when vector is sorted#include<bits/stdc++.h>
using namespace std;
int bsearch(vector<int> &v,int n,int x)
{
    int cnt=0;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]>x)
        {
            high=mid-1;
        }
        else if(v[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            cnt++;
            break;
        }
    }
    return cnt;
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(10);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    sort(v.begin(),v.end());
    int ele;
    cin>>ele;                                   //element to search
    cout<<bsearch(v,6,ele)<<endl;        // 0-> element not found  1->element found
   // print(v);
    return 0;
}

