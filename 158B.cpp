#include<bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip];
main() {
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int ans=0,s=0,c=n;
    for(int i=1; i<=c; i++) {
        s=0;
        s+=a[i]+a[c];   
        if(s>4) {   ///if enough members,amount of car increase
            ans++;
            c--;
            i--;
            continue;
        }
        while(s+a[i+1]<=4) { ///else we add some members to the car
            i++;
            s+=a[i];
        }
        ans++;
        c--;
    }
    cout<<ans;
}

