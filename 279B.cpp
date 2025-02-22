#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,d[vip],a[vip],k;
main()
{   cin>>n>>k;
    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        d[i]=d[i-1]+a[i];
    }
    int ans=INT_MIN;
    for(int i=1; i<=n; i++)
    {   int l=i,r=n,x=i-1;
        while(l<=r)
        {   int m=(l+r)/2;
            if(d[m]-d[i-1]<=k)
            {   x=m;
                l=m+1;
            }
            else
                r=m-1;
        }
        ans=max(ans,x-i+1);
    }
    cout<<ans;
}
