#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    bool flag=true;
    while(flag)
    {
      flag=false;
      for(int i=0;i<n-1;i++)
      {
        if(v[i]+v[i+1]<=k && v[i]>v[i+1])
        {
          swap(v[i],v[i+1]);
          flag=true;
        }
      }
    }
    
    for(int i=0;i<n;i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
  }
}