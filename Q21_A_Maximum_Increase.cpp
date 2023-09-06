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

    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>> nums[i];

    int i=0;
    int j=0;
    int ans=1;

    while(j<n)
    {
        while(j<n)
        {
            if(i==j|| nums[j]> nums[j-1])
                j++;
            else
            break;
        }
        ans= max(ans, j-i);
        i=j;
    }

    cout<<ans<<endl;
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