//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<set>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//const ll INF = 1e18;
//const int MOD = 1e9 + 7;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	sort(a.begin() + 1, a.end());
//
//	auto cal = [&](ll u, ll v) ->ll {
//		ll res = 1;
//		int p = 0;
//
//		for (int i = 1; i <= n; ++i) {
//			if (i == u || i == v)
//				continue;
//
//			int c = a[i] - p;
//
//			if (c <= 0)
//				return 0;
//
//			res = res * c % MOD;
//			++p;
//		}
//
//		if (v != 0)
//			res = res * 2 % MOD;
//
//		return res;
//		};
//
//	ll ans = 0;
//
//	ll f00 = cal(0, 0);
//
//	vector<ll>fx(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		fx[i] = cal(i, 0);
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = i + 1; j <= n; ++j) {
//			ll fij = cal(i, j);
//
//			ll cur = fij;
//			cur = (cur - fx[i] + MOD) % MOD;
//			cur = (cur - fx[j] + MOD) % MOD;
//			cur = (cur + f00) % MOD;
//
//			ans = (ans + cur) % MOD;
//		}
//	}
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