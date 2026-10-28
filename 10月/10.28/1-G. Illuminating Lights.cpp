//
//
////https://codeforces.com/gym/106785/problem/G
//
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
//const ll INF = 1e9 + 1;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<ll>a(5);
//
//	a[1] = -INF;
//	a[2] = -INF;
//	a[3] = INF;
//	a[4] = INF;
//
//	map<pair<ll, ll>,int>mp;
//
//	for (int i = 1; i <= n; ++i) {
//		ll x, y;
//		cin >> x >> y;
//
//		mp[{ x, y }] = 1;
//
//		a[1] = max(a[1], y);
//		a[2] = max(a[2], x);
//		a[3] = min(a[3], y);
//		a[4] = min(a[4], x);
//	}
//
//	bool f1 = mp[{a[2], a[1]}];
//	bool f2 = mp[{a[2], a[3]}];
//	bool f3 = mp[{a[4], a[3]}];
//	bool f4 = mp[{a[4], a[1]}];
//
//	if (f1 && f2 && f3 && f4)
//		cout << "YES\n";
//	else
//		cout << "NO\n";
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
//	while(T--)
//		solve();
//
//	return 0;
//}