#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{  
    int t;
cin >> t;
while(t--)
{
    string a,b;
    cin >> a >> b;
    string ans;
    if(a[0] == b[0]) cout << "YES" <<endl << a[0] <<'*' << endl;
    else if(a.back() == b.back()) cout << "YES" << endl << "*" << a.back() << endl;
    else
    {
        bool flag = false;
      
        for(int i=0;i<a.size()-1;i++)
        {
            if(flag) break;
        for(int j=0;j<b.size()-1;j++)
        {
         if(a[i] == b[j]  && a[i+1] == b[j+1])
        {
         ans+=a[i];
        ans+=a[i+1];
         flag = true;
         break;
        }
        }
        }
        if(ans.size()) cout << "YES"  << endl << '*' << ans <<'*' << endl;
        else cout  << "NO" << endl;
     }
    
}
}