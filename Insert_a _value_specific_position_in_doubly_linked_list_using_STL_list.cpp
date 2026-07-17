#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x>=0 && x<=l.size())
        {
            l.insert(next(l.begin(),x),v);
            for(auto it:l)
                cout<<it<<" ";
            cout<<endl;
            for(auto it = l.rbegin(); it != l.rend(); it++)
                cout << *it << " ";
            cout<<endl;
        }
        else
            cout<<"Invalid"<<endl;
        
    }
    
    return 0;
}