#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,red=0,blue=0,x=0;
		cin>>n>>k;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int temp=k,flag=0;
		while(x!=temp+1)
		{
			int r=x,b=k;
			for(int i=0;i<n;i++)
			{
				if(v[i]>0)
				{
					r+=v[i];
					b-=v[i];
				}
				else
				{
					b+=abs(v[i]);
					r-=abs(v[i]);
				}
			}
			if(r>=0 && b>=0)
			{
				flag=1;
				break;
			}
			x++;
			k--;
		}
		if(flag==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
	}
	return 0;
}