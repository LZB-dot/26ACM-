//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//const int MAXN = 1e6 + 10;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	string s;
//	cin >> s;
//
//	s = " " + s;
//
//	if (n == 1) {
//		cout << "0\n";
//		return;
//	}
//
//	vector<vector<int>>dp(n + 1, vector<int>(2, 0));
//
//	dp[1][0] = dp[1][1] = 0;
//	dp[2][0] = dp[2][1] = ((s[1] == s[2]) ? 1 : 0);
//
//	for (int i = 3; i <= n; ++i) {
//		dp[i][0] = max(dp[i][0], dp[i - 1][0] + (s[i] == s[i - 1] ? 1 : 0));
//		dp[i][0] = max(dp[i][0], dp[i - 1][1] + (s[i] == s[i - 2] ? 1 : 0));
//
//		dp[i][1] = max(dp[i][1], dp[i - 2][0] + (s[i] == s[i - 1] ? 1 : 0) + (s[i] == s[i - 2] ? 1 : 0));
//		dp[i][1] = max(dp[i][1], dp[i - 2][1] + (s[i] == s[i - 1] ? 1 : 0) + (s[i] == s[i - 3] ? 1 : 0));
//	}
//
//	cout << max(dp[n][1], dp[n][0]) << "\n";
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