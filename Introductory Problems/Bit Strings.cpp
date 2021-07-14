#include <bits/stdc++.h>
using namespace std;
#define p 1000000007
int power(long long x, unsigned int y)
{
	int a = 1;	
	x %= p; 
	if (x == 0) 
    return 0;   
	while (y > 0)
	{
		if (y & 1)
			a = (a*x) % p;
		y = y>>1, x = (x*x) % p;
	}
	return a;
}
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n;
        cin>>n;
	cout<< power(2, n)<<'\n';
	return 0;
}
