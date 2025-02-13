#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, k;
    cin >> n >> k;
    
    ll ans = n + (3 - sqrt(9 + 8*(n + k)))/2;
 
    cout << ans << endl;;

    return 0;
}