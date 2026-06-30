#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    int l = 0, r = n, flag = 0, index;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            flag = 1;
            index = mid;
            break;
        }
        else if (nums[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if (flag == 0)
        cout << -1;
    else
        cout << index;
}