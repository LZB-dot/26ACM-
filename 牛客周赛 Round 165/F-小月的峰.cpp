//#include<iostream>
//#include<vector>
//#include<climits>
//
//using namespace std;
//
//
//typedef long long ll;
//#define pii pair<ll,ll> 
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	ll n;
//	cin >> n;
//
//	vector<pii>a(n + 1);
//	for (ll i = 1; i <= n; ++i)
//		cin >> a[i].first >> a[i].second;
//
//	ll l = 1, r = 2e9;
//	ll ans = LLONG_MAX;
//
//	auto check = [&](const ll d) {
//		vector<pii>pre(n + 1, { 0,0 });
//		ll mx = n;
//
//		pre[1] = a[1];
//
//		for (ll i = 2; i <= n; ++i) {
//			ll l = max(pre[i - 1].first + 1, a[i].first);
//			ll r = min(pre[i - 1].second + d, a[i].second);
//
//			if (l > r) {
//				mx = i;
//				break;
//			}
//
//			pre[i] = { l,r };
//		}
//
//		ll L = a[n].first;
//		ll R = a[n].second;
//
//		for (ll i = n - 1; i >= 2; --i) {
//
//			L = max(L + 1, a[i].first);
//			R = min(R + d, a[i].second);
//
//			if (L > R)
//				return false;
//
//			if (i < mx) {
//				ll nl = max(L, pre[i].first);
//				ll nr = min(R, pre[i].second);
//
//				if (nl <= nr)
//					return true;
//			}
//		}
//
//		return false;
//		};
//
//	while (l <= r) {
//		ll mid = l + (r - l >> 1);
//
//		if (check(mid)) {
//			ans = mid;
//			r = mid - 1;
//		}
//		else
//			l = mid + 1;
//	}
//
//	if (ans == LLONG_MAX)
//		cout << "-1\n";
//	else
//		cout << ans << "\n";
//
//	return 0;
//}