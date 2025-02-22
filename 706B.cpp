#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,a[vip],t;
main()
{   ios
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    cin>>t;
    while(t--)
    {   cin>>k;
        int l=0,r=n,ans;
        while(l<=r)
        {   int m=(l+r)/2;
            if(a[m]<=k)
            {   ans=m;
                l=m+1;
            }
            else
                r=m-1;
        }
        cout<<ans<<endl;
    }
}
