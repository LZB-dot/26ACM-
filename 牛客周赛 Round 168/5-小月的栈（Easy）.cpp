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
//	int n, m, k;
//	cin >> n >> m >> k;
//
//	vector<pair<ll, int>>ac(n + 1), bc(m + 1);
//
//	for (int i = 1; i <= n; ++i)
//		cin >> ac[i].first >> ac[i].second;
//	for (int i = 1; i <= m; ++i)
//		cin >> bc[i].first >> bc[i].second;
//
//	vector<vector<vector<ll>>>dp(n + 1, vector<vector<ll>>(m + 1, vector<ll>(2, -INF)));
//	dp[0][0][0] = 0;
//	dp[0][0][1] = 0;
//
//	dp[1][0][0] = ac[1].first;
//	dp[0][1][1] = bc[1].first;
//
//	for (int i = 0; i <= n; ++i) {
//		for (int j = 0; j <= m; ++j) {
//
//			if (i + j <= 1)
//				continue;
//
//			int fa = ac[i - 1].second;
//			int fb = bc[j - 1].second;
//
//			if (i >= 1) {
//				ll cur = -INF;
//
//				if (fa == 0 && dp[i - 1][j][0] != -INF)
//					cur = max(cur, dp[i - 1][j][0] + ac[i].first);
//
//				if (j > 0 && dp[i - 1][j][1] != -INF)
//					cur = max(cur, dp[i - 1][j][1] + ac[i].first);
//
//				dp[i][j][0] = cur;
//			}
//
//			if (j >= 1) {
//				ll cur = -INF;
//
//				if (fb == 0 && dp[i][j - 1][1] != -INF)
//					cur = max(cur, dp[i][j - 1][1] + bc[j].first);
//
//				if (i > 0 && dp[i][j - 1][0] != -INF)
//					cur = max(cur, dp[i][j - 1][0] + bc[j].first);
//
//				dp[i][j][1] = cur;
//			}
//
//
//		}
//	}
//
//
//	ll ans = -INF;
//	for (int i = 0; i <= min(n, k); ++i) {
//		int j = k - i;
//
//		if (j >= 0 && j <= m) {
//			ans = max(ans, dp[i][j][0]);
//			ans = max(ans, dp[i][j][1]);
//		}
//	}
//
//	if (ans < -2e12)
//		cout << "IMPOSSIBLE\n";
//	else
//		cout << ans << "\n";
//
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