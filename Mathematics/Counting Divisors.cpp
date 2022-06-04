#include <bits/stdc++.h> //0.09 sec
using namespace std;
typedef long long int lli;
vector<int> prime, seive(1010, 1);
void sieve_funct() // Get all the prime factors from 1 to 1010, 1e6 ka last fact will be 1k,
{                  // but there will be prime numbers which will be missed, so we find till 1010
    seive[0] = seive[1] = 0;
    for (int i = 2; i < 1010; i++)
    {
        if (seive[i] == 1)
        {
            prime.push_back(i);
            for (int j = i * i; j < 1010; j += i)
                seive[j] = 0;
        }
    }
}
int get_fct(int x) // Getting factors using exhaustive division by prime numbers
{
    int fct = 1, r = 0, p = 1;
    while (prime[r] * prime[r] <= x)
    {
        p = 1;
        while (x % prime[r] == 0)
        {
            x /= prime[r];
            p++;
        }
        fct *= p;
        r++;
    }
    if (x != 1)
        fct *= 2;
    return fct;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    sieve_funct();
    while (t--)
    {
        cin >> n;
        cout << get_fct(n) << '\n';
    }
    return 0;
}