#include <bits/stdc++.h>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);

        int t = 0,c = 1;
        string s;
        cin >> s;
        for(int i = 1; i < s.size(); i++)
            if(s[i] == s[i-1])
               ++c;
            else
              t = max(t,c), c = 1;
        cout << max(t,c);
	return 0;
}