#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int x,y;
main()
{   cin>>x>>y;
    int z=x/2;
    cout<<y*z+(x%2)*(y/2);
}
