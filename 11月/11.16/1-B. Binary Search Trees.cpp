//
//
////https://codeforces.com/gym/106826/problem/B
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 998244353;
//const int MAXN = 2e5 + 10;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>deg(n + 1, 0);
//
//	for (int i = 1; i < n; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		deg[u]++;
//		deg[v]++;
//	}
//
//	ll sum = 1;
//	ll c0 = 0, c1 = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		if (deg[i] == 1)
//			c0++;
//		else if (deg[i] == 2)
//			c1++;
//
//		if (deg[i] != 1)
//			sum = sum * 2 % MOD;
//	}
//
//	ll ans = (2 * c0 + c1) % MOD * sum % MOD;
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//	return 0;
//}