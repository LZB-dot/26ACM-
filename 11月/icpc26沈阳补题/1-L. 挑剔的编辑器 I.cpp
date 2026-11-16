//
////按值传参，每次字符串都会重新复制
////使用const string& s
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//bool check(const string& x) {
//	if (x.size() == 1)
//		return false;
//
//	if (x.size() == 2)
//		return x[0] == x[1];
//
//	if (x.size() >= 3) {
//		int r = x.size() - 1;
//
//		if (x[r] == x[r - 1])
//			return true;
//
//		if (x[r] == x[r - 2])
//			return true;
//
//		return false;
//	}
//		
//}
//
//void solve() {
//	string s;
//	cin >> s;
//
//	string ans;
//
//	for (char c : s) {
//		if (c == '-') {
//			if (ans.empty())
//				continue;
//			ans.pop_back();
//		}
//		else {
//			ans += c;
//			if (check(ans))
//				ans.pop_back();
//
//
//		}
//
////		cout << ans << "\n";
//	}
//
//	if (ans.empty())
//		cout << "-\n";
//	else
//		cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//	return 0;
//}