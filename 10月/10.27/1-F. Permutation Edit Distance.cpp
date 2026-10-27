//
////https://codeforces.com/gym/106785/problem/F
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<int>p(n + 1, 0), q(m + 1, 0);
//	for (int i = 0; i < n; i++)
//		cin >> p[i];
//	for (int i = 0; i < m; i++)
//		cin >> q[i];
//
//	int l = 0, r = min(n, m);
//	int cur = 0;
//
//	auto check = [&](int x)->bool {
//		vector<int>a, b;
//		for (int i : p)
//			if (i <= x)
//				a.push_back(i);
//
//		for (int i : q)
//			if (i <= x)
//				b.push_back(i);
//
//		return a == b;
//	};
//
//	while (l <= r) {
//		int mid = l + (r - l >> 1);
//
//		if (check(mid)) {
//			cur = mid;
//			l = mid + 1;
//		}
//		else
//			r = mid - 1;
//	}
//	ll ans = max(n, m) - min(n, m) + (min(n, m) - cur) * 2;
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while(T--)
//		solve();
//
//	return 0;
//}