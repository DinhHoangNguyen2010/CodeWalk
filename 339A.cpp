#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
main()
{   cin>>s;
    int d1=0,d2=0,d3=0;
    for(int i=0; i<s.size(); i++)
    {   if(s[i]=='1')
            d1++;
        else if(s[i]=='2')
            d2++;
        else if(s[i]=='3')
            d3++;
    }
    for(int i=1; i<=d1; i++)
    {   if(i==d1&&d2==0&&d3==0)
        {   cout<<1;
            return 0;
        }
        cout<<1<<'+';
    }
    for(int i=1; i<=d2; i++)
    {   if(i==d2&&d3==0)
        {   cout<<2;
            return 0;
        }
        cout<<2<<'+';
    }
    for(int i=1; i<=d3; i++)
    {   if(i==d3)
        {   cout<<3;
            return 0;
        }
        cout<<3<<'+';
    }

}
