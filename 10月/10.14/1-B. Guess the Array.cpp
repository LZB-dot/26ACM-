//
////https://codeforces.com/gym/103414/problem/B
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring> 
//#include <set>
//
//using namespace std;
//
//typedef long long ll;
//
//set<pair<ll, ll>> uset;
//vector<ll> sum, ans;
//
//void check(ll i) {
//	cout << "? ";
//
//	ll cur = 0;
//	bool f = 0;
//	if (!uset.count({ i,i })) {
//		cout << i << " " << i << "\n";
//		f = 1;
//	}
//	else {
//		for (ll j = 1; j < i; ++j) {
//			if (!uset.count({ j,i })) {
//				cout << j << " " << i << "\n";
//				cur = sum[i - 1] - sum[j - 1];
//				break;
//			}
//		}
//	}
//
//	cout.flush();
//
//	ll s, l, r;
//	cin >> s >> l >> r;
//
//	if (f)
//		ans[i] = s;
//	else
//		ans[i] = s - cur;
//
//	uset.insert({ l, r });
//	sum[i] = sum[i - 1] + ans[i];
//}
//
//void solve() {
//	ll n;
//	cin >> n;
//
//	sum.resize(n + 1, 0);
//	ans.resize(n + 1, 0);
//
//	for (int i = 1; i <= n; ++i)
//		check(i);
//
//	cout << "! ";
//	for (int i = 1; i <= n; ++i)
//		cout << ans[i] << " ";
//	cout << "\n";
//
//	cout.flush();
//
//}
//
//int main() {
//	solve();
//
//	return 0;
//}