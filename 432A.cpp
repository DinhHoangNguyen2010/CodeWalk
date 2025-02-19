#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int k,n,a[vip];
main()
{   cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int ans=0;
    for(int i=1; i<=n; i++)
        if(a[i]+k<=5)
        {   ans++;
        }
    cout<<ans/3;
}
