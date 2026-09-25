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
  long long cnt=0,sum=0;
  map<long long,long long>mp;
  mp[0]=1;
  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    if(mp.find(sum-k)!=mp.end())
      cnt+=mp[sum-k];
    mp[sum]++;
  }
  cout<<cnt<<'\n';
} 