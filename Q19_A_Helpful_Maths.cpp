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
    string s;
    cin>> s;

    multiset<char> se;
    for(int i=0;i<s.size();i+=2)
    se.insert(s[i]);

    int i=0;
    for(auto c: se)
    {
        s[i]= c;
        i+=2;
    }

    cout<<s<<endl;
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