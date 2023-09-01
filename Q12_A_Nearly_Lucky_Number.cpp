#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 998244353
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define INF (1LL << 60)
#define NINF -INF
#define endl "\n"


void solve()
{
    long long n;
    cin>>n;

    int count=0;
    while(n>0)
    {
        int d= n%10;
        if(d== 4|| d==7)
        count++;
        n/=10;
    }

    if(count== 4|| count==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main()
{
    fast_io;
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}