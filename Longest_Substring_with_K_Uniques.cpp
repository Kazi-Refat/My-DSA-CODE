#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k;
  string s;
  cin>>s>>k;
  int n=s.length();
  int l=0,r=0;
  map<char,int>mp;
  int mx=-1;
  while(r<n)
  {
    mp[s[r]]++;
    if(mp.size()==k)
      mx=max(mx,r-l+1);
    if(mp.size()>k)
    {
      while(mp.size()>k)
      {
        if(mp[s[l]]>1)
          mp[s[l]]--;
        else
          mp.erase(s[l]);
        l++;
      }
    }
    r++;
  }
  cout<<mx;
} 