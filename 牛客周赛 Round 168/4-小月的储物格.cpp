//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<set>
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
//
//
//	vector<ll>a(n + 1, 0), d(m + 1, 0);
//
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	for (int i = 1; i <= m; ++i)
//		cin >> d[i];
//
//	set<int>st;
//	for (int i = 1; i <= n; ++i)
//		st.insert(i);
//
//	ll ans = 0;
//	int p = 1;
//
//	for (int i = 1; i <= m; ++i) {
//		ll cur = ((p + d[i] - 1) % n) + 1;
////		cout << cur << "------\n";
//
//		auto it = st.lower_bound(cur);
//		int tmp;
//
//		if (it == st.end())
//			tmp = *st.begin();
//		else
//			tmp = *it;
//
////		cout << "--\t\t" << tmp << "\n";
//
//		ans += a[tmp];
//		st.erase(tmp);
//
//		p = tmp;
//	}
//
//	cout << ans << " " << p << "\n";
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