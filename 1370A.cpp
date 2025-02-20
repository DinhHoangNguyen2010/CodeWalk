#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define op freopen
#define TXT "test"
#define freo if(fopen(TXT".inp","r"))44der
#define fi first
#define se second
using namespace std;
int k,n;
main()
{   ios
    cin>>n;
    while(n--)
    {   cin>>k;
        int ans=INT_MIN;
        for(int i=1; i<=k/2; i++)
            ans=max(ans,__gcd(i,i*2));
        cout<<ans<<endl;
    }
}
