#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n,k;
  cin>>n>>k;
  vector<long long>v;
  for(int i=0;i<n;i++)
  {
    long long x;
    cin>>x;
    v.push_back(x);
  }
  
  //2 8 12 15 21 29 38 
  int l=0,r=0;
  multiset<long long>st;
  long long sum=0,cnt=0,mn,mx;
  while(r<n)
  {
    st.insert(v[r]);
    mn=*st.begin();
    mx=*st.rbegin();
    if(mx-mn<=k)
    {
      int x=r-l+1;
      cnt+=x;
    }
    else
    {
      while(mx-mn>k)
      {
        auto it=st.find(v[l]);
        st.erase(it);
        mn=*st.begin();
        mx=*st.rbegin();
        l++;
      }
      int x=r-l+1;
      cnt+=x;
    }
    r++;
  }
  cout<<cnt<<'\n';
} 