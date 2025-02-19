#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a[vip],n,ans2,ans1;
main()
{   cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int l=1,r=n;
    while(l<=r)
    {   if(a[l]<a[r])
        {   ans1+=a[r];
            r--;
        }
        else
        {   ans1+=a[l];
            l++;
        }
        if(!(l<=r))
            break;
        if(a[r]>a[l])
        {   ans2+=a[r];
            r--;
        }
        else
        {   ans2+=a[l];
            l++;
        }
    }
    cout<<ans1<<' '<<ans2;
}
