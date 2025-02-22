#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,a,b;
main()
{   ios
    cin>>t;
    while(t--)
    {   cin>>a>>b;
        a=a+a;
        b=b+b;
        int k=min(a*a,b*b);
        if(sqrt(k)<a/2||sqrt(k)<b/2)
            cout<<max(a*a/4,b*b/4)<<endl;
        else
            cout<<k<<endl;
    }
}
