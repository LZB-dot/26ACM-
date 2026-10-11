//
//
////https://codeforces.com/gym/102307/problem/K
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	if (n <= 2)
//		cout << "0\n";
//	else if (n == 3)
//		cout << "2\n";
//	else if (n == 4)
//		cout << "3\n";
//	else {
//		int ans = (n - 4) / 3 * 2;
//		ans += 3;
//		int tmp = (n - 4) % 3;
//
//		if (tmp >= 2)
//			++ans;
//
//		cout << ans << "\n";
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