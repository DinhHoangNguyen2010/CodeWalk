#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
main()
{   cin>>s;
    for(int i=0; i<s.size(); i++)
    {   if(i==0)
        {   if(s[i]=='9')
                continue;
        }
        if(s[i]>='5')
        {   int c=s[i]-48;
            c=9-c;;
            s[i]=c+48;
        }
    }
    cout<<s;
}
