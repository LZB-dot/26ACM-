//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//typedef long long ll;
//
//struct Node {
//	int idx;
//	ll a, b, c;
//};
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<Node>peo(n + 1);
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> peo[i].a >> peo[i].b >> peo[i].c;
//		peo[i].idx = i;
//	}
//
//	sort(peo.begin() + 1, peo.end(), [&](const Node& x, const Node& y) {
//		return x.a < y.a;
//		});
//
//	vector<vector<pair<int, ll>>>out(10);
//
//	ll t = peo[1].a;
//	for (int i = 1; i <= n; ++i) {
//		ll cur = max(t, peo[i].a) + peo[i].c;
//		out[i % 10].push_back({ i,cur });
//		t = cur;
//	}
//
//	vector<ll>ans(n + 1, 0);
//	for (int i = 0; i < 10; ++i) {
//		if (out[i].empty())
//			continue;
//		ll t = out[i][0].second;
//		for (auto it : out[i]) {
//			int p = it.first;
//			ll cur = it.second;
//
//			//	cout << p << "-----\t" << cur << "\n";
//			
//			t = max(t, cur);
//			
//			if (peo[p].b >= t) {
//				ans[peo[p].idx] = 0;
//				t = peo[p].b;
//			}
//			else
//				ans[peo[p].idx] = t - peo[p].b;
//
//		}
//	}
//
//	for (int i = 1; i <= n; ++i)
//		cout << ans[i] << " ";
//	cout << "\n";
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
//	while (T--)
//		solve();
//
//	return 0;
//}