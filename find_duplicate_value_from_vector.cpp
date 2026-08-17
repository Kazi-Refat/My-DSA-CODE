#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>v;
    int x;
    while(cin>>x)
    {
      v.push_back(x);
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
      for(int j=i+1;j<v.size();j++)
      {
        if(v[i]==v[j])
        {
          count++;
          break;
        }
      }
    }
    cout<<count;
}
