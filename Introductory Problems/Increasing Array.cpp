#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);
        lli t,s = 0,m = 0,x = 0;
        cin >>t >> m;
        for(int i=1;i<t;i++)
        {
            cin>>x;
            if(x < m)
              s += (m - x);
            else
              m = x;
        }
    cout << s;
    return(0);
}