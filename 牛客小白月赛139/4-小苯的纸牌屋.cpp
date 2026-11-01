//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//const ll INF = 1e18;
//const int MAXN = 2e5;
//
//map<ll, int>mp;
//
//void init() {
//	ll sum = 0;
//	for (int i = 1; ; ++i) {
//		sum = i * 3 + i * (i - 1) / 2 * 3;
//
//		if (sum >= MAXN)
//			break;
//
//		mp[sum] = 1;
//	}
//}
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<ll>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	ll ans = -INF;
//
//	for (auto it : mp) {
//		ll k = it.first;
//
//		if (k > n)
//			break;
//
//		ll sum = 0;
//		for (int i = 1; i <= k - 1; ++i)
//			sum += a[i];
//
//		for (int i = k; i <= n; ++i) {
//			sum += a[i];
//			ans = max(ans, sum);
//			sum -= a[i - k + 1];
//		}
//	}
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
//	init();
//	//	cout << mp.size() << "\n";
//
//
//	while (T--)
//		solve();
//
//	return 0;
//}