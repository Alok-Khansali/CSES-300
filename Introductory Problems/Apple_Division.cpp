#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() 
{
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        cout.tie(NULL);
        lli n;
        cin>>n;
        lli sum = 0,ans = INT_MAX;
        vector<lli> a(n,0);
        for(int i=0;i<n;i++)
        {
          cin >>a[i];
          sum += a[i];
        }
        for(int k = 0;k <= pow(2,n);k++)
        {
            lli temp = 0,c = 1;
            bitset<20> b(k);                                              //Bitset for permutations
            for(int i = 0;i<n;i++)
            {
                temp += (b[i] == 1) ? a[i] : 0;                           //Bitset access is from right to left
            }
            ans = min(ans, abs(temp - (sum-temp)));
        }
        cout << ans << '\n';	
        return 0;
}