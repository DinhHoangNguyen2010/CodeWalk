#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
using namespace std;
bool snt[vip];
void make_snt()
{   snt[1]=1;
    for(int i=2; i<=sqrt(1e6); i++)
        if(snt[i]==0)
            for(int j=i*i; j<=1e6; j+=i)
                snt[j]=1;
}
int n,a[vip];
main()
{   make_snt();
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {   if(sqrt(a[i])==round(sqrt(a[i])))
        {   int k=sqrt(a[i]);
            if(snt[k]==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
