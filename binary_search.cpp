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
    sort(v.begin(),v.end());
    while (q--)
    {
        int l = 0, r = v.size() - 1, flag = 0;
        int val;
        cin >> val;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 0)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
    return 0;
}