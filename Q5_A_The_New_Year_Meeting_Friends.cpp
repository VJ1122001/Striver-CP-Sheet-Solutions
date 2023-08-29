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

//TC :O(1) SC O(1)
void solve()
{
    int x1,x2,x3;
    cin>> x1>>x2>>x3;

    vector<int> points;
    points.push_back(x1);
    points.push_back(x2);
    points.push_back(x3);

    sort(points.begin(), points.end());

    cout<< points[1]- points[0] + points[2]- points[1]<<endl;

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