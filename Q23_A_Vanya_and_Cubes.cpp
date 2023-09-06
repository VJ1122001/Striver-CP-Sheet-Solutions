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
    int cubes;
    cin>> cubes;

    int level=1;
    while(cubes>0)
    {
        cubes-= (level)* (level+1)/2;
        if(cubes<0)
        break;
        level++;
    }

    cout<<level-1<<endl;
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