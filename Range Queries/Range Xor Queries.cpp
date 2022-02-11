#include <bits/stdc++.h>    
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli n,t;
    cin >> n >> t;
    lli a[n+1];
    for(int i =0;i<n;i++)             //O(N)
        cin >> a[i];
    a[n] = 0;
    for(int i = n-1;i>=0;i--)         //O(N)
        a[i] ^= a[i+1];
    while(t--)                        //O(T)
    {
        int l,r;
        cin >> l >> r;
        cout << (a[l-1] ^ a[r]) << '\n';
    }
    return 0;
} 