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
//	int mx = 0;
//	
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		mx = max(mx, a[i]);
//	}
//
//	int l, r;
//	for (int i = 1; i <= n; ++i)
//		if (a[i] == mx) {
//			l = i;
//			break;
//		}
//
//	for (int i = n; i >= 1; --i)
//		if (a[i] == mx) {
//			r = i;
//			break;
//		}
//
//	if (mx & 1)
//		cout << r << "\n";
//	else
//		cout << l << "\n";
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