#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n,k;
  cin>>n>>k;

  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  long long sum=0;
  map<long long,int>pre_sum;
  pre_sum[0]=-1;
  int r=0;
  int mx=0;
  while(r<n)
  {
    sum+=v[r];
    long long temp=sum-k;
    if(pre_sum.find(temp)!=pre_sum.end())
    {
      int x=r-pre_sum[temp];
      mx=max(mx,x);
    }
    if(pre_sum.find(sum)==pre_sum.end())
      pre_sum[sum]=r;
    r++;
  }
  cout<<mx;
} 