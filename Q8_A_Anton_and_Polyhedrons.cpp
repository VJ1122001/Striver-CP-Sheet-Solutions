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

void solve(unordered_map<string,int>&  mp)
{
    int n;
    cin>> n;

    int faces=0;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>> s;
        faces+= mp[s];
    }
    cout<<faces<<endl;
}

int main()
{
    fast_io;
    unordered_map<string,int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]= 6;
    mp["Icosahedron"]= 20;
    mp["Dodecahedron"]= 12;
    mp["Octahedron"]=8;
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve(mp);
    }
    return 0;
}