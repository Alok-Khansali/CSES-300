#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
	      cin.tie(NULL);
        cout.tie(NULL);
        int n,m,k,c=0,j=0,i=0;
        cin >> n >> m >> k;
        int a[n],s[m];
        for(int i=0;i<n;i++)
         cin >> a[i];
        for(int i=0;i<m;i++)
         cin >> s[i];
        sort (a,a+n);
        sort(s,s+m);
        while(i<n && j<m)
           if(a[i] >= s[j] - k && a[i] <= s[j] + k )
              c++,i++,j++;
           else if(a[i]<s[j])
              i++;
           else if(a[i]>s[j])
              j++;
        cout << c;
	return 0;
}
