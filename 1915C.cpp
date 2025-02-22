#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,n,a[vip];
main()
{   cin>>t;
    while(t--)
    {   int s=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {   cin>>a[i];
            s+=a[i];
        }
        if(sqrt(s)==round(sqrt(s)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
