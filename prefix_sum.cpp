#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<long long int>prefix_sum(n,0);
	for (int i = 0; i < n; i++)
	{
		if(i==0)
			prefix_sum[i]=v[i];
		else
			prefix_sum[i]=prefix_sum[i-1]+v[i];
	}
	
	while(q--)
	{
		int s, e;
		cin >> s >> e;
		if(s==1)
		{
			cout<<prefix_sum[e-1]<<endl;
		}
		else
		{
			cout<<prefix_sum[e-1]-prefix_sum[s-2]<<endl;
		}
	}
	return 0;
}