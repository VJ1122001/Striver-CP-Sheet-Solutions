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
    string table;
    vector<string> hand(5);
    cin>> table;
    
    for(int i=0;i<5;i++)
    cin>> hand[i];

    bool flag= false;
    for(int i=0;i<5;i++)
    {
        if(hand[i][0]== table[0])
        flag= true;
        else if(hand[i][1]== table[1])
        flag= true;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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