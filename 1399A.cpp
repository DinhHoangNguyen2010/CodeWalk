#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,n,a[vip];
main()
{   cin>>t;
    while(t--)
    {   cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int dem=0;
        for(int i=1; i<=n-1; i++)
        {   if(a[i+1]-a[i]>1)
            {   dem++;
                break;
            }
        }
        if(dem==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
