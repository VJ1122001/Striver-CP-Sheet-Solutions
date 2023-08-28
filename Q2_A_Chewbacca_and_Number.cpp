#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>> n;
    
    string num;
    num= to_string(n);
    
    for(int i=0;i< num.size(); i++)
    {
        // cout<<num[i]<<" "<<'9'-num[i]<<endl;
        if( num[i] > ('9'- num[i]+'0'))
        {
            if(i==0 && (('9'- num[i]+'0')=='0')) continue;
            num[i]='9'- num[i]+'0';
        }
    }
    
    cout<<num<<endl;
    
    // cout<< stoll(num)<<endl;
    
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
