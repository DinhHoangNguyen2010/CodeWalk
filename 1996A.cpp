#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,n;
main()
{   cin>>t;
    while(t--)
    {   cin>>n;
        if(n%4==0)
            cout<<n/4<<endl;
        else
            cout<<n/4+1<<endl;
    }
}
