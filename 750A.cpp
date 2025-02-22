#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
using namespace std;
int n,k;
main()
{   cin>>n>>k;
    int l=0,r=n,ans;
    while(l<=r)
    {   int m=(l+r)/2;
        int s=5*(m*(m+1)/2)+k;
        if(s<=240)
        {   ans=m;
            l=m+1;
        }
        else
            r=m-1;
    }
    cout<<ans;
}
