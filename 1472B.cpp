#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],t;
main()
{   ios
    cin>>t;
    while(t--)
    {   int dem1=0,dem2=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {   cin>>a[i];
            if(a[i]==1)
                dem1++;
            else
                dem2++;
        }
        if(dem1%2==1)
            cout<<"NO"<<endl;
        else if(dem1==0&&dem2%2==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
