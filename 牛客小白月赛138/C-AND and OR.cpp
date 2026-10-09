//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	ll n, k;
//	cin >> n >> k;
//
//	vector<pair<ll, int>>a(n + 1);
//	for (int i = 1; i <= n; ++i) {
//		a[i].second = i;
//		cin >> a[i].first;
//	}
//
//	sort(a.begin() + 1, a.end());
//
//	int l = 1;
//	int r = n;
//
//	while (l < r) {
//		ll tmp = a[l].first + a[r].first;
//		if (tmp == k) {
//			cout << min(a[l].second, a[r].second) << " " << max(a[l].second, a[r].second) << "\n";
//			return;
//		}
//
//		if (tmp < k)
//			++l;
//		else
//			--r;
//	}
//
//
//	cout << "-1\n";
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