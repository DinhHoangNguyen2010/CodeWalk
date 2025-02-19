#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],g,u,t,b[vip],c[vip],d[vip];
main()
{   cin>>n;
    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        if(a[i]==1)
        {   g++;
            b[g]=i;
        }
        else if(a[i]==2)
        {   u++;
            c[u]=i;
        }
        else
        {   t++;
            d[t]=i;
        }

    }
    cout<<min({g,u,t})<<endl;
    for(int i=1; i<=min({g,u,t}); i++)
        cout<<b[i]<<' '<<c[i]<<' '<<d[i]<<endl;
}
