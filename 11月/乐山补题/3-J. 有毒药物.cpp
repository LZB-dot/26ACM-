//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e6 + 10;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0);
//	int c0 = 0;
//	unordered_map<int, int>mp;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		if (a[i] == 0)
//			++c0;
//		mp[a[i]]++;
//	}
//
//	if (c0 >= 2) {
//		cout << "-1\n";
//		return;
//	}
//
//	sort(a.begin() + 1, a.end());
//	int l = 0, r = n - 1;
//	int ans = 0;
//
//	auto check = [&](const int x)->bool {
//		ll sum = 1, c = 1;
//		ll pre = 0;
//
//		for (int i = 0; i <= x; ++i) {
//
//			pre += mp[i];
//
//			if (sum < pre)
//				return false;
//
//			if (sum >= n)
//				return true;
//
//			c = c * (x - i) / (i + 1);
//			sum += c;
//		}
//
//		return false;
//	};
//	
//	
//	while (l <= r) {
//		int mid = l + (r - l >> 1);
//
//		if (check(mid)) {
//			ans = mid;
//			r = mid - 1;
//		}
//		else
//			l = mid + 1;
//	}
//
//	cout << ans << "\n";
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