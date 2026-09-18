#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  set<int> s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    s.insert(x);
  }
  for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";

}