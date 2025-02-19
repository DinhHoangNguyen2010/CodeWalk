#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a[vip],n,s,ans=1e9;
main()
{   cin>>s>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    s--;
    for(int i=1; i<=n-s; i++)
        ans=min(ans,a[i+s]-a[i]);
    cout<<ans;
}
