#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
 cin >> t;
while(t--)
{
string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    
    for (int i = 0; i < 26; i++) {
        char ch = ('a' + i);
        int len = 0;
        int res = 0;
        
        for (int j = 0; j < n; j++) 
{
            if (s[j] == ch) 
{
                res = max(res, len);
                len = 0;
            } else {
                len++;
            }
        }
        
        res = max(res, len);
        ans = min(ans, res);
    }
	int cnt = 0;
    while(ans>0)
{
 ans/=2;
cnt++;
}
    cout << cnt << endl;
}
    
    return 0;
}
