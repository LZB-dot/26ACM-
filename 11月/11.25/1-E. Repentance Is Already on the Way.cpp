//
////https://codeforces.com/problemset/problem/2275/E
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0), b(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//	for (int i = 1; i <= n; ++i)
//		cin >> b[i];
//
//	vector<int>pre(n + 1, 0), suff(n + 1, 0);
//	for (int i = 1; i <= n; ++i) {
//		if (i == 1)
//			pre[i] = (a[i] == b[i] ? 2 : 1);
//		else {
//			pre[i] = pre[i - 1] + (a[i] == b[i - 1] ? 2 : 1);
//			pre[i] += (a[i] == b[i] ? 2 : 1);
//			
//		}
//	}
//
//	for (int i = n; i>=1; --i) {
//		if (i == n)
//			suff[i] = 0;
//		else {
//			suff[i] =suff[i + 1] + (a[i] == b[i + 1] ? 2 : 1);
//			suff[i] -= (a[i] == b[i] ? 2 : 1);
//		}
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= n; ++i) 
//		ans = max(ans, pre[n] + suff[i]);
//	
//
//	cout << ans << "\n";
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