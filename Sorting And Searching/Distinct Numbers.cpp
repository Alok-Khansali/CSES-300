#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cout.tie(NULL);
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
          while (i<n-1 && a[i]==a[i+1])
               i++;
            c++;
        }
        cout<<c<<'\n';
	return 0;
}
