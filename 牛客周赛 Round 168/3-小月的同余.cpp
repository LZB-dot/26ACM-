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
//	ll n, m;
//	cin >> n >> m;
//
//	ll ans = 0;
//
//	vector<ll>a(n + 1, 0), pre(n + 1, 0);
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		pre[i] = (pre[i - 1] + a[i]) % m;
//		pre[i] = (pre[i] + m) % m;
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		ll x = pre[i];
//		ll y = (pre[n] - pre[i - 1] + m) % m;
//
//		if (x == y)
//			++ans;
//	}
//
//	cout << ans << "\n";
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