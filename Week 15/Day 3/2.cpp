#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
    
        vector<int> ar(n); 
        for(int i=0;i<n;i++) cin >> ar[i];
    
        map<int,ll> mp;
        ll ans = 0;
    
        for(int i=0;i<n;i++)
        {
            ans+=mp[ar[i]-i-1]++;
        }
        cout << ans << endl;
    }

    return 0;
}