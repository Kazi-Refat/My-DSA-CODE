#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,q;
  cin>>n>>q;
  vector<int>v(n+1),d(n+2);
  for(int i=1;i<=n;i++)
  {
    int x;
    cin>>x;
    v[i]=x;
  }
  while(q--)
  {
    int l,r,x;
    cin>>l>>r>>x;
    d[l]=d[l]+x;
    d[r+1]=d[r+1]-x;
  }
  for(int i=1;i<=n;i++)
  {
    d[i]+=d[i-1];
  }
  cout<<"Prefix Sum: ";
  for(int i=1;i<=n;i++)
  {
    cout<<d[i]<<" ";
  }
  cout<<'\n'<<"Final Array: ";
  for(int i=1;i<=n;i++)
  {
    v[i]+=d[i];
    cout<<v[i]<<" ";
  }
}