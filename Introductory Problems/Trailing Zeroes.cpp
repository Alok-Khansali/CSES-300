#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef long long int lli;
typedef long long ll;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);

        int n,s = 0;
        cin >> n;

        while(n >= 5)
         {
             s += n/5;
             n /= 5;
         }
        cout << s << "\n";

	return 0;
}