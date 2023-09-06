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

    vector<string> calls={
        "1","11","111","1111",
        "2","22","222","2222",
        "3","33","333","3333",
        "4","44","444","4444",
        "5","55","555","5555",
        "6","66","666","6666",
        "7","77","777","7777",
        "8","88","888","8888",
        "9","99","999","9999",
    };

    int ans=0;
    for(int i=0;i<calls.size();i++)
    {
        ans+= calls[i].size();
        if(calls[i]== s)
        {
            break;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    fast_io;
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}