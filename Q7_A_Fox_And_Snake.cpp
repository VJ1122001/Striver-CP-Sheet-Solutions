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
    int n,m;
    cin>>n>>m;

    bool flag= true;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            string temp(m,'#');
            cout<<temp<<endl;
        }
        else
        {
            string temp(m,'.');
            if(flag) temp[m-1]='#';
            else temp[0]= '#';
            flag= !flag;
            cout<<temp<<endl;
        }
    }
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