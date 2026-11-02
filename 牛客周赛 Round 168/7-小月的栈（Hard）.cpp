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
//
//void solve() {
//	ll n, m, k;
//	cin >> n >> m >> k;
//
//	vector<ll>a(n + 1), ac(n + 1);
//	vector<ll>b(m + 1), bc(m + 1);
//
//	for (ll i = 1; i <= n; ++i) {
//		cin >> a[i] >> ac[i];
//		a[i] += a[i - 1];
//		ac[i] += ac[i - 1];
//	}
//
//	for (ll i = 1; i <= m; ++i) {
//		cin >> b[i] >> bc[i];
//		b[i] += b[i - 1];
//		bc[i] += bc[i - 1];
//	}
//
//	ll ans = -INF;
//
//	ll l = max(0LL, k - m);
//	ll r = min(n, k);
//
//	for (int i = l; i <= r; ++i) {
//		int j = k - i;
//
//		if (i > 0 && ac[i - 1] > j)
//			continue;
//
//		if (j > 0 && bc[j - 1] > i)
//			continue;
//
//		ans = max(ans, a[i] + b[j]);
//	}
//
//	if (ans == -INF)
//		cout << "IMPOSSIBLE\n";
//	else
//		cout << ans << "\n";
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