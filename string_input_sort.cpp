#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        string str;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] !=' ')
            {
                str += s[i];
            }
        }
        sort(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}
