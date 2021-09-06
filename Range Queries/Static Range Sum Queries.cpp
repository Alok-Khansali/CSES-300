#include <bits/stdc++.h>
using namespace std;
int main() 
{
        ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        cout.tie(NULL);
        int n,q,x,y;
        cin >> n >> q;
        long long int a[n+1]={0}; 
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            a[i] += a[i-1]; 
        }
        while(q--)
        {
           cin >> x >> y;
           cout << a[y] - a[x-1] << '\n';
        }
	return 0;
}
