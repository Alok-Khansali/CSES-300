#include <bits/stdc++.h>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);
        int n;
        cin >> n;
        if(n>1 && n<4)
          cout << "NO SOLUTION\n";

        for(int i = n - 1 + n%2; i > 0;i -= 2)
          cout << i << ' ';

        for(int i = n - n%2 ; i > 0; i -= 2)
           cout << i << ' ';
	return 0;
}