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
//ll l, r;
//
//void check(ll a, ll b, ll c, ll d) {
//	ll x = a - c;  
//	ll y = d - b;  
//
//	if (y == 0) 
//		return;
//
//	if (y > 0) {
//		// 上升对：需要 k > x/y → k >= floor(x/y) + 1
//		if (x > 0)
//			l = max(l, x / y + 1);
//	}
//	else {
//		// 下降对：需要 k <= floor(x/y)
//		if (x > 0) 
//			r = min(r, -1LL);     
//		else if (x < 0) 
//			r = min(r, x / y);      
//		
//	}
//}
//
//void solve() {
//	int n;
//	cin >> n;
//
//	l = 0;
//	r = INF;
//
//	vector<int>p(n + 1, 0), q(n + 1, 0);
//	vector<int>pos(n + 1, 0);
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> p[i];
//		pos[p[i]] = i;
//	}
//
//	for (int i = 1; i <= n; ++i)
//		cin >> q[i];
//
//
//	for (int i = 2; i <= n; ++i)
//		check(pos[q[i - 1]], q[i - 1], pos[q[i]], q[i]);
//
//	if (l > r)
//		cout << "0\n";
//	else {
//		if (r == INF)
//			cout << "inf\n";
//		else
//			cout << (r - l + 1) << "\n";
//	}
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
//	return 0;
//}