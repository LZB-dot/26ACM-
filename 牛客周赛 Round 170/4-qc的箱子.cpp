//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<climits>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//const ll MAXN = 2e5 + 10;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	ll n;
//	cin >> n;
//
//	vector<ll>b(n + 1, 0);
//	for (ll i = 1; i < n; ++i)
//		cin >> b[i];
//
//	if (n == 2) {
//		cout << (b[1] + 1) / 2 << "\n";
//		return 0;
//	}
//
//	vector<ll>sum(n + 1, 0);
//	ll p1 = LLONG_MIN, p2 = LLONG_MIN;
//	ll q1 = LLONG_MAX, q2 = LLONG_MAX;
//
//	for (ll i = 2; i <= n; ++i) {
//		sum[i] = b[i - 1] - sum[i - 1];
//		if (i & 1) {
//			p1 = max(p1, sum[i]);
//			q1 = min(q1, sum[i]);
//		}
//		else {
//			p2 = max(p2, sum[i]);
//			q2 = min(q2, sum[i]);
//		}
//	}
//
//	ll ans = LLONG_MAX;
//
//	for (ll i = 1; i < b[1]; ++i) {
//
//		if (q1 + i <= 0)
//			continue;
//
//		if (q2 - i <= 0)
//			continue;
//
//		if (p1 + i <= 0)
//			continue;
//
//		if (p2 - i <= 0)
//			continue;
//
//		ans = min(ans, max({ i,p1 + i, p2 - i }));
//	}
//
//	if (ans == LLONG_MAX || ans <= 0)
//		cout << "-1\n";
//	else
//		cout << ans << "\n";
//
//	return 0;
//}