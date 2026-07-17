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
    int flag=1;
    while(!l.empty())
    {
        if(l.front()!=l.back())
        {
            flag=0;
            break;
        }
        l.pop_front();
        if(!l.empty()) 
            l.pop_back(); 
    }
    if(flag==1)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}