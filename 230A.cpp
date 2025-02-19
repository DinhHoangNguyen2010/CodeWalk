#include<bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi first
#define se second
using namespace std;
int n,s;
pair<int,int>a[vip];
main() {

    cin>>s>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i].fi>>a[i].se;
    sort(a+1,a+n+1);
    for(int i=1; i<=n; i++) {
        if(a[i].fi<s) {
            s+=a[i].se;
        } else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}


