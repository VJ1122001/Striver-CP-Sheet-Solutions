#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k, l, c, d, p, nl, np;
    cin >>n >> k >> l >> c >> d >> p >> nl >> np;
    int total= l*k;
    // cout<<min ({total/nl, c*d, p/np})<<endl;
    cout<<min ({total/nl, c*d, p/np})/n <<endl;
}

int main() {
	
	int t=1;
// 	cin>> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
