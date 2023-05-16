#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef long long int lli;
typedef long long ll;
double power(double x, lli y)
{
	int res = 1;	 
	x = (lli)x % m; 
	if (x == 0) 
       return 0;   
	while (y > 0)
	{
		if (y & 1)
			res = (lli)(res * x) % m;
		y = y >> 1;                     
		x = (lli)(x * x) % m;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        cout.tie(NULL);
        lli n;
        cin >> n;
        double x = (1 + sqrt(5)) /2;
        x = power(x,n)  / sqrt(5);
        cout << round(x) << '\n';
	return 0;
}
