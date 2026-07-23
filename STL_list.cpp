#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    int x;
    while(cin>>x)
    {
        l.push_back(x);
    }
    for(int i=0;i<l.size();i++)
    {
      if(*next(l.begin(),i)<0)
        l.erase(next(l.begin(),i));
    }
    for(int i=0;i<l.size();i++)
    {
      cout<<*next(l.begin(),i)<<" ";
    }
    
    return 0;
}