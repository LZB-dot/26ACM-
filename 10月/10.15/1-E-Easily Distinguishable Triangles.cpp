//
////https://codeforces.com/gym/104012/problem/E
//
//
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
//const int MOD = 998244353;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	int n;
//	cin >> n;
//
//	vector<vector<char>>a(n + 1, vector<char>(n + 1));
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j)
//			cin >> a[i][j];
//	}
//
//	ll ans = 1;
//	for (int i = 1; i <= n; ++i) {
//
//		for (int j = 1; j <= n;) {
//
//			if (a[i][j] != '?') {
//				++j;
//				continue;
//			}
//
//			int k = j;
//			while (k <= n && a[i][k] == '?')
//				++k;
//
//			int len = k - j;
//
//			bool L = (j > 1 && a[i][j - 1] == '#');
//			bool R = (k <= n && a[i][k] == '#');
//
//			if (L && R) {
//				cout << "0\n";
//				return 0;
//			}
//			else if (L || R)
//				ans *= 1;
//			else
//				ans = ans * (len + 1) % MOD;
//
//			j = k;
//		}
//	}
//
//	for (int j = 1; j <= n; ++j) {
//
//		for (int i = 1; i <= n;) {
//
//			if (a[i][j] != '?') {
//				++i;
//				continue;
//			}
//
//			int k = i;
//			while (k <= n && a[k][j] == '?')
//				++k;
//
//			int len = k - i;
//
//			bool L = (i > 1 && a[i - 1][j] == '#');
//			bool R = (k <= n && a[k][j] == '#');
//
//			if (L && R) {
//				cout << "0\n";
//				return 0;
//			}
//			else if (L || R)
//				ans *= 1;
//			else 
//				ans = ans * (len + 1) % MOD;
//
//			i = k;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}