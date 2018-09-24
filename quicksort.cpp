// quicksort
// complexity- O(nlogn)
#include<bits/stdc++.h>
using namespace std;

int piv(vector<int> &v, int st, int en)
{
    int pivot= v[en];
    int pidx=st;
    for(int i=st;i<en;i++)
    {
        if(v[i]<=pivot)
        {
            swap(v[i],v[pidx]);
            pidx++;
        }
    }
    swap(v[pidx],v[en]);
    return pidx;

}
void quicksort(vector<int> &v,int st,int en)
{
  if(st<en)
  {
      int part=piv(v,st,en);                        //find the partition index first then iterate left and right part.
    //  cout<<part<<endl;
      quicksort(v,st,part-1);
      quicksort(v,part+1,en);
  }
}
void print(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    int n=v.size();
    quicksort(v,0,n-1);
    print(v);
    return 0;
}
