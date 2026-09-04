#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<string>v;
  while(n--)
  {
    string a;
    cin>>a;
    v.push_back(a);
  }
  map<string,bool>mp;
  for(int i=v.size()-1;i>=0;i--)
  {
    string s=v[i];
    if(mp.find(s)!=mp.end())
      continue;
    else
    {
      mp[s]=true;
      cout<<s<<endl;
    }
  }
}