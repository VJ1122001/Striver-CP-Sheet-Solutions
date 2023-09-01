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
    cin>> n;

    vector<pair<int,int>> stops(n);

    for(int i=0;i<n;i++)
    cin>> stops[i].first>> stops[i].second;

    int count=0;
    int result=0;

     for(int i=0;i<n;i++)
     {
        count-= stops[i].first; count+= stops[i].second;
        result= max(result,count);
     }

     cout<<result<<endl;
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