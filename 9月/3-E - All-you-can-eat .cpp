//
//
////https://atcoder.jp/contests/abc145/tasks/abc145_e
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//const int MAXN = 3005;
//const ll INF = 1e18;
//
//struct Node {
//	int a, b;
//};
//
//Node arr[MAXN];
//
//void solve() {
//	int n, t;
//	cin >> n >> t;
//
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i].a >> arr[i].b;
//
//	sort(arr, arr + n, [&](const Node& x, const Node& y) {
//		return x.a < y.a;
//		});
//
//	vector<ll>dp(t+1, 0);
//	ll ans = 0;
//
//	for (int i = 0; i < n; ++i) {
//		int a = arr[i].a;
//		int b = arr[i].b;
//
//		for (int j = 0; j < t; ++j)
//			ans = max(ans, dp[j] + b);
//
//		for (int j = t - 1 - a; j >= 0; --j)
//			dp[j + a] = max(dp[j + a], dp[j] + b);
//	}
//
//	cout << ans << "\n";
//}
//
//int main() {
//	//int T;
//	//cin >> T;
//
//	//while (T--)
//	solve();
//
//	return 0;
//}
//
//
//
//
//
//
//
