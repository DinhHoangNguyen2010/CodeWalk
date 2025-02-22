#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
using namespace std;
int n,k,a[vip];
main()
{   cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int ans=max(a[1],k-a[n])*2;
    for(int i=1; i<=n-1; i++)
        ans=max(ans,a[i+1]-a[i]);
    double s=ans/2.00000000;
    cout<<setprecision(9)<<fixed<<s;
}