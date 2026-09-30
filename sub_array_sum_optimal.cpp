#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n,k;
  cin>>n>>k;
  vector<int>nums;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    nums.push_back(x);
  }
  unordered_map<int,int>mp;
  mp[0]=1;
  int r=0,l,cnt=0;
  long long sum=0;
  while(r<n)
  {
    sum+=nums[r];
    l=sum-k;
    if(mp.find(l)!=mp.end())
    {
      cnt+=mp[l];
    }
    mp[sum]++;
    r++;
  }
  cout<<cnt;
} 