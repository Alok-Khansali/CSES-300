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

        string s, w = "",o = "";
        cin >> s;
        int c=0;
        vector<int> v(26,0);

        for(int i = 0;i < s.size(); i++)
           v[s[i] - 'A']++;

        for(int i = 0;i < 26;i++)
           if(v[i] & 1)
             c++;

        if(c>1)
           cout<<"NO SOLUTION\n";
        else
          {
            for(int i = 0;i < 26; i++)
              if(v[i] & 1)
              {
                 while(v[i]--)
                    o += (char('A' + i));
              }
              else
              { 
                  for(int j=0;j<v[i]/2;j++)
                    w+=(char('A'+i)); 
              }
                w += o;
            for(int i = 25; i >= 0; i--){
                for(int j = 0;j < v[i]/2; j++){
                    w += (char('A' + i));
                }
            }
            cout << w << "\n";
          }
	return 0;
}