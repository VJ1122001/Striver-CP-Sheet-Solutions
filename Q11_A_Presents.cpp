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
    int n;
    cin>>n;

    vector<int> p(n);
    for(int i=0;i<n;i++)
    cin>> p[i];

    vector<int> ans(n);

    for(int i=0;i<n;i++)
    ans[p[i]-1]= i+1;

    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
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