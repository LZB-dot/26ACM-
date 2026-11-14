//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void solve() {
//	int n, m, k;
//	cin >> n >> m >> k;
//
//	int mx = n * (n - 1) / 2;
//
//	if (m > mx) {
//		cout << "-1\n";
//		return;
//	}
//
//	int rem = n - k + 1;
//	int need = rem * (rem - 1) / 2;
//
//	if (m > need) {
//		cout << "-1\n";
//		return;
//	}
//
//	if (m < rem - 1) {
//		cout << "-1\n";
//		return;
//	}
//
//	for (int i = 1; i <= rem; ++i) {
//		for (int j = i + 1; j <= rem; ++j) {
//			cout << i << " " << j << "\n";
//			--m;
//
//			if (m == 0)
//				return;
//		}
//	}
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