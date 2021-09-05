#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
lli power(lli a,lli b,lli m)
{
    lli r=1;
    a%=m;
    if(a==0 && b==0)
    return(r);
    if (a == 0) 
        return 0;     
	while (b > 0)
	{
		if (b & 1)
			r = (r*a) % m;
		b =b>>1;       
		a = (a*a) % m;
	}
	return r;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        lli t,a,b,c;
        cin>>t;
        while(t--)
        {
           cin>>a>>b >> c;
           cout<< power(a,power(b,c,1000000006),1000000007) << "\n";               //using fermat's little theorem to avoid overflow
        }
	return 0;
}
