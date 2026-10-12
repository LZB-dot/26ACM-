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
//	int n;
//	cin >> n;
//
//	vector<ll>a(n + 2, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	a[n+1] = 1e9 + 10;
//	a[0] = 1e9 + 10;
//
//	int pre = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (a[i - 1] >= a[i])
//			++pre;
//		else
//			break;
//	}
//
//	int suf = 0;
//	for (int i = n; i >= 1; --i) {
//		if (a[i] <= a[i + 1])
//			++suf;
//		else
//			break;
//	}
//
//	if (pre == n) {
//		int cnt = 0;
//		for (int i = 1; i <= n; ++i)
//			if (a[i] == a[1])
//				++cnt;
//
//		if (cnt == n)
//			cout << n << "\n";
//		else
//			cout << "1\n";
//	}
//	else if (pre + suf < n)
//		cout << "0\n";
//	else {
//		int cnt = 0;
//		int st = max(1, n - suf);
//		for (int i = st; i <= pre; ++i) {
//			if (a[1] <= a[i + 1])
//				++cnt;
//		}
//
//		cout << cnt << "\n";
//	}
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
//
//	return 0;
//}