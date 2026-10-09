//
//
////https://codeforces.com/contest/2259/problem/C
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void solve() {
//	int n;
//	cin >> n;
//	vector<int>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	int l = 1;
//	int r = n;
//	while (l <= n && (a[l] != 1 && a[l] != -1))
//		++l;
//
//	while (r >= 1 && (a[r] != 1 && a[r] != -1))
//		--r;
////	cout << l << "---" << r << "\n";
//	for (int i = 1; i <= n; ++i) {
//		if (i == l || i == r)
//			cout << "1 ";
//		else if (a[i] == -1)
//			cout << "0 ";
//		else
//			cout << a[i] << " ";
//	}
//
//	cout << "\n";
//}
//
//int main() {
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//	return 0;
//}
//
//
//
//
//
