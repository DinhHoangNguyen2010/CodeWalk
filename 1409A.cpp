#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,a,b;
main()
{   cin>>t;
    while(t--)
    {   cin>>a>>b;
        int r=abs(a-b)%10;
        int ans=abs(a-b)/10;
        if(r==0)
            cout<<ans<<endl;
        else
            cout<<ans+1<<endl;
    }
}
