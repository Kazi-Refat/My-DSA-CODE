#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
//less=set and less_equla=multiset
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    pbds<int> p;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p.insert(x);
    }
    int x=p.order_of_key(4);
    cout<<x<<'\n';

    auto it =p.find_by_order(2);
    cout<<*it<<'\n';
    
    for (auto it : p) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}