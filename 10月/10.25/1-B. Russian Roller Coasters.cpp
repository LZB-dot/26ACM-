//
////https://codeforces.com/gym/105477/problem/B
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//
////长度为 2*l，最高高度不超过 h，
////且最终回到高度0的方案数
//int f[205][205];
//
//void init() {
//
//	for (int h = 1; h <= 200; ++h) {
//		vector<vector<int>> dp(405, vector<int>(h + 1, 0));
//		dp[0][0] = 1;
//
//		for (int i = 1; i <= 400; ++i) {
//
//			for (int j = 0; j <= h; ++j) {
//				if (j - 1 >= 0)
//					dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
//
//				if (j + 1 <= h)
//					dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;
//
//			}
//		}
//
//		for (int l = 1; l <= 200; ++l) 
//			f[l][h] = dp[2 * l][0];
//		
//	}
//
//	
//
//}
//
//void solve() {
//	int h, l;
//	cin >> l >> h;
//
//	if (h > l) {
//		cout << "0\n";
//		return;
//	}
//
//	cout << (f[l][h] - f[l][h - 1] + MOD) % MOD << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	init();
//
//	while(T--)
//		solve();
//
//	return 0;
//}