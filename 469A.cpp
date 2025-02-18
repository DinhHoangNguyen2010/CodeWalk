#include<bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],q,dem[vip],p;
main()
{
    cin>>n>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>a[i];
        dem[a[i]]++;
    }
    cin>>p;
    for(int i=1; i<=p; i++)
    {
        cin>>a[i];
        dem[a[i]]++;
    }
    for(int i=1; i<=n; i++)
        if(dem[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    cout<<"I become the guy.";

}

