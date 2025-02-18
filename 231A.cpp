#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,x,y,z,ans;
main()
{   cin>>t;
    while(t--)
    {   int dem=0;
        cin>>x>>y>>z;
        if(x==1)
            dem++;
        if(y==1)
            dem++;
        if(z==1)
            dem++;
        if(dem>=2)
            ans++;
    }
    cout<<ans;
}