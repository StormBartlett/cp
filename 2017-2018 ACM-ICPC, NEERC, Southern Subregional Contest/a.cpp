#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
long long t[N];

int main() {
  long long n, m, a, d;
  scanf("%lld %lld %lld %lld", &n, &m, &a, &d);
  long long  now = 0, kloter = d/a + 1, r = d - (kloter-1) * a;
  // cerr << r << endl;
  r = max(r, 0LL);
  long long ans = 0;
  for(int i = 0;i < m; ++i) scanf("%lld", t+i);
  for (int i = 0; i < m;) {
    long long bef = max(min((t[i]-1)/a, n), 0LL);
    long long sisa = bef - now;
    long long b = sisa / kloter;
    ans += b;
    now += b * kloter;
    if (b) {
      while (i < m && t[i] <= now * a + r) i++;
    }
    if (i >= m) break;
    ans++;
    long long to = t[i] + d;
    if (now < n)
      to = min(to, (now + 1) * a + d);
    while (i < m && t[i] <= to) i++;
    now = max(now, min(n, to/a));
  }
  if (now < n)
    ans += (n - now + kloter - 1) / kloter;
  cout << ans << endl;
  return 0;
}
