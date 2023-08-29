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

    string num= to_string(n);

    if(num.size()==1)
    {
        cout<<num.size()<<endl;
        cout<<num<<endl;
        return;
    }

    // cout<<num<<endl;
    vector<long long> addends;

    for(int i=0; i<num.size();i++)
    {
        if(num[i]-'0')
        {
            int d= num[i]-'0';
            int p= ceil(pow(10, num.size()-i-1));
            // cout<<p<<endl;
            addends.push_back(d * p);
            // cout<<d<<" * "<<p<<" = " << (d * p)<<endl;
            // cout<<pow(10, num.size()-i-1)<<endl;
        }
    }

    cout<<addends.size()<<endl;
    for(auto a : addends)
        cout<<a<<" ";
    cout<<endl;

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