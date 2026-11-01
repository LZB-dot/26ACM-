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
//const ll INF = 1e18;
//
//void solve() {
//	int n, x;
//	cin >> n >> x;
//
//	vector<ll>c(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> c[i];
//
//
//	priority_queue<ll, vector<ll>, greater<ll>>pq;
//	int cur = 0;
//	ll ans = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		ll need = (i - x + 1) / 2;
//
//		pq.push(c[i]);
//
//		if (need <= 0)
//			continue;
//
//		if (need != cur) {
//			if (pq.empty()) {
//				cout << "-1\n";
//				return;
//			}
//
//			ans += pq.top();
//			pq.pop();
//			cur++;
//		}
//	}
//		
//	if (cur * 2 >= n)
//		cout << "-1\n";
//	else
//		cout << ans << "\n";
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