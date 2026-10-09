//
//
////https://codeforces.com/contest/2259/problem/C
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//const int MAXN = 1005;
//const ll INF = 1e18;
//
//struct Node{
//	int w, s;
//	ll v;
//};
//
//Node a[MAXN];
//
//void solve() {
//	int n;
//	cin >> n;
//
//	ll mx = 0;
//	for (int i = 0; i < n; ++i) {
//		cin >> a[i].w >> a[i].s >> a[i].v;
//		mx = max(mx, 1LL*a[i].s + a[i].w);
//	}
//
//	sort(a, a + n, [&](const Node& x, const Node& y) {
//		return x.s + x.w < y.s + y.w;
//	});
//
//	//总重量为j的时候的最大价值
//	vector<ll>dp(mx + 1, 0);
//	dp[0] = 0;
//
//	for (int i = 0; i < n; ++i) {
//		int w = a[i].w;
//		int s = a[i].s;
//		ll v = a[i].v;
//
//		ll cur = min(1LL * s, mx - w);
//		for (int j = cur; j >= 0; --j) {
//			dp[j + w] = max(dp[j + w], dp[j] + v); 
//		}
//	}
//
//	ll ans = 0;
//	for (int j = 0; j <= mx; ++j)
//		ans = max(ans, dp[j]);
//
//	cout << ans << "\n";
//}
//
//int main() {
//	//int T;
//	//cin >> T;
//
//	//while (T--)
//		solve();
//
//	return 0;
//}
//
//
//
//
//
