//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	vector<int>b(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> b[i];
//
//	int sa = 0, sb = 0;
//	for (int i = 1; i <= n; ++i) {
//		sa += a[i];
//		sb += b[i];
//	}
//
//	cout << max(sa, sb) << "\n";
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