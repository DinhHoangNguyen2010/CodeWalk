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
{   ios
    cin>>t;
    while(t--)
    {   cin>>n;
        k=n%3; /// Check what type of money is left
        n=n/3; /// Initial amount required
        if(k==0)
        {   cout<<n<<' '<<n<<endl;
        }
        else if(k==1)
        {   cout<<n+1<<' '<<n<<endl;
        }
        else
        {   cout<<n<<' '<<n+1<<endl;
        }
    }
}
