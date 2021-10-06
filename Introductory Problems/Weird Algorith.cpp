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
    lli n;
    cin >> n;
    cout << n << " ";
        while(n != 1)
        {
            if(n & 1)
               n = n*3 + 1;
            else
               n /= 2;
            cout << n << " ";
        }
        return 0;
}