#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    
    vector<string> stmts(n);
    for(int i=0; i<n; i++)
    cin>> stmts[i];
    
    int x=0;
    for(int i=0;i<n;i++)
    {
        int pCount=0;
        int nCount=0;
        
        for(int j=0;j<stmts[i].size(); j++)
        if(stmts[i][j]=='+') pCount++;
        else if(stmts[i][j]== '-') nCount++;
        
        if(pCount==2) x+=1;
        if(nCount==2) x-=1;
    }
    
    cout<<x<<endl;
    
    
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
