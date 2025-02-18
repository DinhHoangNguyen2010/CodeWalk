#include<bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,ans;
main()
{
    cin>>n;
    ans+=n/100;  ///amount of 10
    n=n%100;
    ans+=n/20;  ///amount of 20
    n=n%20;
    ans+=n/10; ///amount of 10
    n=n%10;
    ans+=n/5; ///amount of 5
    n=n%5; 
    ans+=n;  ///amount of 1
    cout<<ans;
}

