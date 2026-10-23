//
//
////https://codeforces.com/gym/106677/problem/E
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
//
//void solve() {
//	int n;
//
//	while (cin >> n && n != 0) {
//
//		ll sum = 0;
//		ll mi = 2e18;
//
//		vector<pair<ll, ll>>a(n + 1);
//		for (int i = 1; i <= n; ++i) {
//			cin >> a[i].first >> a[i].second;
//			sum += a[i].second;
//			if (a[i].second > 0)
//				mi = min(mi, a[i].first);
//		}
//		
//		sort(a.begin()+1, a.end());
//
//		if (sum == 0) {
//			ll ans = 0;
//			for (int i = 1; i <= n; ++i)
//				ans += a[i].first;
//			cout << ans << "\n";
//		}
//		else {
//			int k = max(1LL, (n - sum));
//			if (k == 1) {
//				cout << mi << "\n";
//				continue;
//			}
//
//			bool has = false;
//			ll tmp = 0;
//			for (int i = 1; i <= k; ++i) {
//				tmp += a[i].first;
//				if (a[i].second > 0)
//					has = true;
//			}
//
//			if (has)
//				cout << tmp << "\n";
//			else {
//				ll ans = tmp - a[k].first + mi;
//				cout << ans << "\n";
//			}
//
//		}
//	}
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}