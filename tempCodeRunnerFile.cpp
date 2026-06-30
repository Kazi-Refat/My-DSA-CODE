#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			if (r == n / 2 && c == n / 2)
				cout << "X";
			else if (r == c)
				cout << "\\";
			else if (r+c==n-1 )
				cout << "/";
			else
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}