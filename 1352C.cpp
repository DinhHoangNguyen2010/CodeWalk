#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,n,k;
main()
{   cin>>t;
    while(t--)
    {   cin>>n>>k;
        int l=1,r=1e15,ans;
        while(l<=r)
        {   int m=(l+r)/2;
            if(m-m/n==k)
            {   ans=m;
                break;
            }
            else if(m-m/n<k)
                l=m+1;
            else
                r=m-1;
        }
        if(ans%n==0)
            ans--;
        cout<<ans<<endl;
    }
}
