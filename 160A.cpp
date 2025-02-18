#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],s;
main()
{   cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1; i<=n; i++)
        a[i]=a[i-1]+a[i];
    for(int i=1; i<=n; i++)
        if(a[i]>a[n]-a[i])
        {   cout<<i;
            break;
        }
}