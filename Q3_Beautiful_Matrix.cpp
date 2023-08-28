#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<int>> mat(5,vector<int>(5,0));
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>> mat[i][j];
        }
    }    
        
    int ansi=-1;
    int ansj=-1;
        
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5; j++)
        {
            if(mat[i][j]==1)
            {
                ansi= i+1;
                ansj= j+1;
                break;
            }
        }
    }
    
    // cout<<abs(3-ansi)<<endl;
    // cout<<abs(3-ansj)<<endl;
    cout<<abs(3-ansi)+ abs(3-ansj)<<endl;
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
