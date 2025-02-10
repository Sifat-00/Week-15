#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
    	
    cin >> n >> x;

    vector<int> a(n + 1);

    a[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        sum = max(sum,a[i]-a[i-1]);
    }

    sum = max(sum,2*(x-a[n]));

    cout << sum << endl;

    return 0;
}