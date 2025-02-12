#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        map<int,int>mp;
        vector<int>track;
        for(int i=0;i<n;i++)
        {
            if(mp[ar[i]%10] <=3) 
            {
                track.push_back(ar[i]%10);
                mp[ar[i]%10]++;
            }
        }
        bool flag = false;
        for(int i=0;i<track.size();i++)
        {
            for(int j=i+1;j<track.size();j++)
            {
                for(int k=j+1;k<track.size();k++)
                {
                    if((track[i] + track[j] + track[k])%10  == 3)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "No" << endl;
    }

    return 0;
}