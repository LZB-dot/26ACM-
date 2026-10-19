//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<cmath>
//#include<queue>
//
//using namespace std;
//
//#define pii pair<int,int>
//
//typedef long long ll;
//
//const int MAXN = 4020;
//const ll INF = 1e18;
//
//int n, s;
//vector<ll>a, b;
//
//ll dp1[MAXN][MAXN >> 1][2];
//ll dp2[MAXN][MAXN >> 1][2];
//
//void init() {
//
//	for (int i = 0; i < MAXN; ++i) {
//		for (int j = 0; j < (MAXN >> 1); ++j)
//			dp1[i][j][0] = dp1[i][j][1] = dp2[i][j][0] = dp2[i][j][1] = INF;
//	}
//
//	dp1[0][0][0] = 0;
//	for (int i = 1; i <= n; ++i) {
//		dp1[i][0][0] = 0;
//
//		for (int j = 1; j <= (i + 1) / 2; ++j) {
//			dp1[i][j][0] = min(dp1[i - 1][j][0], dp1[i - 1][j][1]);
//			dp1[i][j][1] = min(dp1[i][j][1], dp1[i - 1][j - 1][0] + a[i]);
//		}
//	}
//
//	dp2[n + 1][0][0] = 0;
//	for (int i = n; i >= 1; --i) {
//		dp2[i][0][0] = 0;
//
//		for (int j = 0; j <= (n - i + 1) / 2; ++j) {
//			dp2[i][j][0] = min(dp2[i + 1][j][0], dp2[i + 1][j][1]);
//			dp2[i][j][1] = min(dp2[i][j][1], dp2[i + 1][j - 1][0] + b[i]);
//		}
//	}
//
//}
//
//bool check(int x) {
//
//	for (int i = 1; i <= n - 2; ++i) {
//
//		ll p1 = min(dp1[i][x][0], dp1[i][x][1]);
//		ll p2 = min(dp2[i + 2][x][0], dp2[i + 2][x][1]);
//
//		if (p1 + p2 <= s)
//			return true;
//
//	}
//
//	return false;
//}
//
//void solve() {
//	cin >> n >> s;
//
//	a.resize(n + 1, 0);
//	b.resize(n + 1, 0);
//
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//	for (int i = 1; i <= n; ++i)
//		cin >> b[i];
//
//	int l = 0, r = n / 2;
//	int ans = 0;
//
//	init();
//
//	while (l <= r) {
//		int mid = l + (r - l >> 1);
//
//		if (check(mid)) {
//			ans = mid;
//			l = mid + 1;
//		}
//		else
//			r = mid - 1;
//	}
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}