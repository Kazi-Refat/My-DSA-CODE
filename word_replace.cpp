#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s, r;
		cin >> s >> r;
		int lr = r.length();
		for (int i = 0; i + lr <= s.length(); i++)
		{
			string sub;
			sub = s.substr(i, lr);
			if (sub == r)
			{
				s.replace(i, lr, "#");
			}
		}
		cout << s << endl;
	}
	return 0;
}
