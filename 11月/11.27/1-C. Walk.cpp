//
//
////https://codeforces.com/gym/105818/problem/C
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef long long ll;
//
//
//const int MOD = 998244353;
//const int MAXN = 1000000 + 10;
//
//ll fac[MAXN], inv[MAXN];
//
//
//ll qpow(ll a, ll b) {
//	ll ans = 1;
//	while (b) {
//		if (b & 1)
//			ans = ans * a % MOD;
//		a = a * a % MOD;
//		b >>= 1;
//	}
//	return ans;
//}
//
//
//void init() {
//	fac[0] = 1;
//	for (int i = 1; i < MAXN; ++i)
//		fac[i] = fac[i - 1] * i % MOD;
//
//	inv[MAXN - 1] = qpow(fac[MAXN - 1], MOD - 2);
//
//	for (int i = MAXN - 1; i >= 1; --i)
//		inv[i - 1] = inv[i] * i % MOD;
//
//}
//
//ll C(int n, int m) {
//	return fac[n] * inv[m] % MOD * inv[n - m] % MOD;
//}
//
//void solve() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//
//	if (a < 2 || a + d != b + c + 1) {
//		cout << "0\n";
//		return;
//	}
//
//	ll ans = C(a + d - 2, d);
//	ans = ans * C(b + c, b) % MOD;
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	init();
//
//	int T;
//	cin >> T;
//
//	while(T--)
//		solve();
//	
//	return 0;
//}
