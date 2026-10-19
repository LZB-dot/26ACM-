////
//////https://codeforces.com/gym/102829/problem/G
////
////
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cstring> 
////#include<queue>
////
////using namespace std;
////
////typedef long long ll;
////
////const int MOD = 1e9 + 7;
////const int MAXN = 1e4 + 10;
////
////void solve() {
////	int n;
////	cin >> n;
////
////	vector<int>a(n + 1, 0);
////	for (int i = 1; i <= n; ++i)
////		cin >> a[i];
////
////
////
////	vector<int>pre(n + 1, 0);
////	for (int i = 1; i <= n; ++i)
////		pre[i] = pre[i - 1] + a[i];
////
////	ll ans = 0;
////
////	for (int i = 1; i <= n; ++i) {
////		for (int j = i; j <= n; ++j) {
////			int sum = pre[j] - pre[i - 1];
////
////			if (sum & 1)
////				continue;
////
////			vector<ll>dp(MAXN, 0);
////			dp[0] = 1;
////
////			for (int k = i; k <= j; ++k) {
////				for (int s = MAXN-1; s >= a[k]; --s) {
////					dp[s] = (dp[s] + dp[s - a[k]]) % MOD;
////				}
////			}
////
////			ans = (ans + dp[sum / 2]) % MOD;
////		}
////	}
////
////	cout << ans << "\n";
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	solve();
////
////	return 0;
////}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//const int MAXN = 1e4 + 10;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	ll ans = 0;
//	vector<ll>dp(MAXN, 0);
//
//	for (int i = 1; i <= n; ++i) {
//		fill(dp.begin(), dp.end(), 0);
//
//		dp[0] = 1;
//		int sum = 0;
// 
//		//优化：避免每段区间都重复做dp 直接对新加入的元素进行dp即可
//		for (int j = i; j <= n; ++j) {
//			sum += a[j];
//
//			for (int s = sum; s >= a[j]; --s) {
//				dp[s] += dp[s - a[j]];
//				//用条件判断代替直接取模避免了昂贵的除法指令
//				if (dp[s] >= MOD)
//					dp[s] -= MOD;
//			}
//
//			if (sum % 2 == 0)
//				ans = (ans + dp[sum / 2]) % MOD;
//		}
//
//	}
//	cout << ans << "\n";
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}