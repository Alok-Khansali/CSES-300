#include <bits/stdc++.h>               //Modular Exponentiation
using namespace std;
#define m 1000000007
typedef long long int lli;
typedef long long ll;
int power(lli a,int b)
{
    int r=1;
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
        int t,a,b;
        cin>>t;
        while(t--)
        {
           cin>>a>>b;
           cout<<power(a,b)<<"\n";
        }
	return 0;
}
