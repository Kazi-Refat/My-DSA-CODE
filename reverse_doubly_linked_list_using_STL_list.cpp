#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
            break;
        l.push_back(x);
    }
    l.reverse();
    for(int i=0;i<l.size();i++)
    {
        cout<<*next(l.begin(),i)<<" ";
    }
    return 0;
}