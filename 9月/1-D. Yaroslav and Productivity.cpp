//
////https://codeforces.com/contest/2244/problem/D
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<ll>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//	
//	vector<ll>sum(n + 1, 0), rsum(n + 1, 0);
//	for (int i = 1; i <= n; ++i) {
//		sum[i] = sum[i - 1] + a[i];
//		rsum[i] = rsum[i - 1] - a[i];
//	}
//
//	vector<ll>b(m + 1, 0);
//	for (int i = 1; i <= m; ++i)
//		cin >> b[i];
//	sort(b.begin() + 1, b.end(),greater<int>());
//
//	ll ans = sum[n] - sum[b[1]];
//	for (int i = 1; i <= m-1; ++i) {
//		int r = b[i];
//		int l = b[i + 1];
//		ans += max(rsum[r] - rsum[l], sum[r] - sum[l]);
//	}
//
//	ans += max(rsum[b[m]], sum[b[m]]);
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