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
//	string s;
//	cin >> s;
//
//	bool f1 = 0;
//	bool f2 = 0;
//	int i = 0;
//	int j = n - 1;
//
//	while (i <= j) {
//		if (s[i] == '?' || s[j] == '?') {
//			if (i != j)
//				f2 = 1;
//			++i;
//			--j;
//		}
//		else if (s[i] == s[j]) {
//			++i;
//			--j;
//		}
//		else {
//			f1 = 1;
//			break;
//		}
//	}
//
//	if (f1)
//		cout << "impossible\n";
//	else {
//		if (f2)
//			cout << "possible\n";
//		else
//			cout << "certainly\n";
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