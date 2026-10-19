//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<cmath>
//
//using namespace std;
//
//#define pii pair<int,int>
//
//typedef long long ll;
//
//
//
//void solve() {
//
//	ll n;
//	cin >> n;
//
//	vector<ll>a(n + 1, 0);
//	for (ll i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	vector<ll>pre(n + 1, 0);
//	for (ll i = 1; i <= n; ++i)
//		pre[i] = a[i] + pre[i - 1];
//
//	ll mx = 910;
//	ll ans = 0;
//
//	for (ll i = 1; i <= n; ++i) {
//	
//		for (ll j = i + 2; j <= n; ++j) {
//			if (j > mx + i)
//				break;
//
//			ll p1 = a[i] * a[j];
//			ll p2 = pre[j - 1] - pre[i];
//
//			if (p1 == p2)
//				++ans;
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
//	solve();
//
//	return 0;
//}