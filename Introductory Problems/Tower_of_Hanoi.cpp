#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char a, char b, char c) // TOH(n-1, source, using, destination);
{
    if (n == 0)
        return;
    TOH(n - 1, a, c, b);
    cout << a << " " << c << '\n'; // Then send the Nth disc to tower C
    TOH(n - 1, b, a, c);           // Then again send the n-1 discs from tower B to Tower C using Tower A
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << ((int)(pow(2, n) - 1)) << '\n';
    TOH(n, '1', '2', '3');
}
