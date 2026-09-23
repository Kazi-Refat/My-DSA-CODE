#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k;
  cin>>n>>k;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  long long sum=0,mx=0;
  int l=0;
  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    if(i-l+1==k)
    {
      mx=max(mx,sum);
      sum-=v[l];
      l++;
    }
  }
  cout<<mx<<endl;
} 