#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s,ans="hello";
int j=0;
main()
{   cin>>s;
    for(int i=0; i<s.size(); i++)
    {   if(s[i]==ans[j])
        {   j++;
        }
        if(j==ans.size())
            break;
    }
    if(j==ans.size())
        cout<<"YES";
    else
        cout<<"NO";

}
