#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,n,a[vip],x,d[vip];
main()
{   cin>>n;

    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        if(i>1)
            d[i]=d[i-1]+a[i];
        else
            d[1]=a[1];
    }
    cin>>t;
    while(t--)
    {   cin>>x;
        int pos=lower_bound(d+1,d+n+1,x)-d;
        if(pos>n)
            pos--;
        cout<<pos<<endl;
    }
}
