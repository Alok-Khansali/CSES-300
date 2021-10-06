#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);
        lli s = 0,n;
        cin >> n;
        s = n*(n + 1) /2;
        for(lli i = 1; i < n ; i++)
        {
            lli x;
            cin >> x;
            s -= x;
        }
        cout << s;
	return 0;
}