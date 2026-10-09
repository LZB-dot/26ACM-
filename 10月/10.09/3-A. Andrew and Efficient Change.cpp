////
//////https://codeforces.com/gym/102319/problem/A
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////typedef long long ll;
////
////const int INF = 1e6;
////const int MAXN = 2e5 + 10;
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	int n;
////	cin >> n;
////
////	int l, r;
////	cin >> l >> r;
////
////	vector<int>coins(n + 1, 0);
////	for (int i = 1; i <= n; ++i)
////		cin >> coins[i];
////
////	sort(coins.begin() + 1, coins.end());
////
////
////		vector<int>dp(r + 1, INF);
////		dp[0] = 0;
////		for (int i = 1; i <= n; ++i) {
////			for (int j = coins[i]; j <= r; ++j) {
////				dp[j] = min(dp[j], dp[j - coins[i]] + 1);
////			}
////		}
////
////		//for (int i = 0; i <= r; ++i)
////		//	cout << dp[i] << "----\n";
////
////		ll mx = 0;
////		int ans = 0;
////		for (int i = l; i <= r; ++i)
////			mx += dp[i];
////
////		for (int i = 1; i <= r; ++i) {
////
////			//多加一枚硬币，只需要跑一层循环
////			vector<int>tmp = dp;
////			for (int j = i; j <= r; ++j)
////				tmp[j] = min(tmp[j], tmp[j - i] + 1);
////
////			ll cur = 0;
////			for (int j = l; j <= r; ++j)
////				cur += tmp[j];
////
////			if (cur < mx) {
////				ans = i;
////				mx = cur;
////			}
////		}
////
////		cout << ans << "\n";
////
////
////
////	return 0;
////}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef long long ll;
//
//const int INF = 1e6;
//const int MAXN = 2e5 + 10;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	int l, r;
//	cin >> l >> r;
//
//	vector<int>coins(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> coins[i];
//
//	sort(coins.begin() + 1, coins.end());
//
//	vector<int>dp(r + 1, INF);
//	dp[0] = 0;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = coins[i]; j <= r; ++j) {
//			dp[j] = min(dp[j], dp[j - coins[i]] + 1);
//		}
//	}
//
//	ll mx = 0;
//	int ans = 0;
//	for (int i = l; i <= r; ++i)
//		mx += dp[i];
//
//	for (int i = 1; i <= r; ++i) {
//
//		ll cur = 0;
//		for (int j = l; j <= r; ++j) {
//			int tmp = dp[j];
//			for (int k = 1; k * i <= j; ++k)
//				tmp = min(tmp, k + dp[j - k * i]);
//
//			cur += tmp;
//		}
//
//		if (cur < mx) {
//			ans = i;
//			mx = cur;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}