#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define DB double
#define sf scanf
#define pf printf
#define nl printf("\n")
#define FOR(i,a,b) for(i = a; i <= b; ++i)
#define FORD(i,a,b) for(i = a; i >= b; --i)
#define FORS(i,n) for(i = 0; i < n; ++i)
#define FORM(i,n) for(i = n - 1; i >= 0; --i)
#define reset(i,n) memset(i, n, sizeof(i))
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)
#define mp make_pair

const LL mod = 1e9 + 7;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a*b / gcd(a, b); }

int num[15];

int main(void)
{
	int i, k; sf("%d", &k);
	FORS(i,12) sf("%d", &num[i]);
	sort(num, num+12);
	int cur = 0, ans = 0;
	if(!k) { puts("0"); return 0; }
	FORM(i,12) {
		cur += num[i];
		ans++;
		if(cur >= k) {
			cout << ans << endl;
			return 0;
		}
	}
	puts("-1");
	return 0;
}
