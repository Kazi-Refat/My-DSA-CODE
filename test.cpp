#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v1 = {1, 2};
	vector<int> v2 = {3};
	for (int i = 0; i < v2.size(); i++)
	{
		v1.push_back(v2[i]);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	int n = v1.size();
	if (n % 2 == 0)
	{
		double mid = (v1[n / 2 - 1] + v1[n / 2]);
		cout << mid / 2;
	}
	else
	{ 
		cout<<n/2;
		cout << v1[n / 2];
	}
	return 0;
}