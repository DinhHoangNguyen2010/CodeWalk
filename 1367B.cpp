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
    {   int c=0,l=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {   cin>>a[i];
            if(a[i]%2==1)
                l++;
            else
                c++;
        }
        if((n-1)%2==1)
        {   if(c==(n-1)/2+1&&l==(n-1)/2+1)
            {   int dem=0;
                for(int i=0; i<n; i++)
                    if(a[i]%2!=i%2)
                        dem++;
                cout<<dem/2<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else
        {   if(c==(n-1)/2+1&&l==(n-1)/2)
            {   int dem=0;
                for(int i=0; i<n; i++)
                    if(a[i]%2!=i%2)
                        dem++;
                cout<<dem/2<<endl;
            }
            else
                cout<<-1<<endl;
        }
    }
}
