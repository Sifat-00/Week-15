#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{

    ll a, b;
    cin >> a >> b;

    if((a % 2 + b % 2) % 2 == 0) cout << "Bob" << endl;
    else cout << "Alice" << endl;

}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}