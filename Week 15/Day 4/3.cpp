#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      char ch[3];
	cin >> ch[0] >> ch[1];
	for(int i=1;i<=8;i++)
    {
		for(char j='a';j<='h';j++)
        {
			if(((ch[0]==j)^(ch[1]-'0'==i))==1) cout << j << i << endl;
		}
	}
     }

    return 0;
}