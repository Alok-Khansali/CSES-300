#include <bits/stdc++.h>
using namespace std;
int Jos(int n, int k)    //Modify after reading the article
{
    if(n == 1)
    return 1;
    if(k <= (n+1)/2)
    {
        if(2*k <= n)
        return 2*k;
        return (2*k)%n;
    }
    int x = Jos(n/2,k - (n+1)/2);   // Whole Point of Joshephus
    if(n & 1)                       //Read the article on gfg on josephus with k = 2 
    return 2*x + 1;
    return 2*x - 1;
}
int main()
{
    ios_base::sync_with_stdio(0);  // Speed
    cin.tie(NULL);
    int t,n,k;
    cin >> t;
    while(t--)                     // Number of test cases,
    {
        cin >> n >> k;
        if(k <= n/2)
        {
            cout << 2*k << '\n';
            continue;
        }
        int x = Jos(n ,k);     // Add one when numbering begins from 1
        cout << x << '\n';
    }
}