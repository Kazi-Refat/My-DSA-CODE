#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int total_one=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='1')
        total_one++;
    }

    int final=total_one;
    for(int i=0;i<=n-k;i++)
    {
      int m=total_one;
      for(int j=i;j<i+k;j++)
      {
        if(s[j]=='1')
          m--;
        else
          m++;
      }
      if(m>final)
        final=m;
    }
    cout<<final<<endl;
  }
}
/*
3
10 3
1001101000
5 5
00000
4 1
1111
*/