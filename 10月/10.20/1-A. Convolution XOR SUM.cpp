//
//
////https://codeforces.com/gym/104333/problem/A
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	ll ans = 0;
//	ll sum = 1;
//
//	vector<int>a(n + 1, 0), b(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//	for (int i = 1; i <= n; ++i)
//		cin >> b[i];
//
//	for (int i = 1; i <= n - 1; ++i)
//		sum = sum * i % MOD;
//
//	for (int i = 0; i < 30; ++i) {
//		ll a1=0, b1 = 0;
//
//		for (int j = 1; j <= n; ++j) {
//			if ((a[j] >> i) & 1)
//				++a1;
//			if ((b[j] >> i) & 1)
//				++b1;
//		}
//
//		int a0 = n - a1;
//		int b0 = n - b1;
//
//		ll tmp = (a0 * b1 + b0 * a1) % MOD;
//		tmp = tmp * (1LL << i) % MOD;
//
//		ans = tmp + ans % MOD;
//	}
//
//	ans = ans * sum % MOD;
//	cout << ans << "\n";
//
//	return 0;
//}