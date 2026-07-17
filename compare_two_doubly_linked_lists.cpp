#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l1;
    list<int>l2;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
            break;
        l1.push_back(x);
    }
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
            break;
        l2.push_back(x);
    }
    int len1=l1.size(),len2=l2.size();
    int flag=1;

    if(len1!=len2)
        flag=0;
    else
    {
        for(int i=0;i<len1;i++)
        {
            int val1=*next(l1.begin(),i),val2=*next(l2.begin(),i);
            if(val1!=val2)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}