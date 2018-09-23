#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &v, int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

void selectsort(vector<int> &v, int n)
{
    int mini;                         //minimum index
    for(int i=0;i<(n-1);i++)
    {
        mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[mini])
            {
                mini=j;
            }
        }
        swap(v[i],v[mini]);
    }
}

void insertsort(vector<int> &v, int n)
{
    for(int i=0;i<n;i++)
    {
        int temp=v[i];
        int j=i;
        while(j>0 && temp<v[j-1])
        {
            v[j]=v[j-1];
            j--;
        }
        v[j]=temp;
    }
}
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(10);
    v.push_back(6);
   // bubblesort(v,4);
   // selectsort(v,4);
    insertsort(v,4);
    print(v);
    return 0;
}
