//
//
////https://codeforces.com/gym/101915/problem/G
//
//
//
////https://codeforces.com/gym/101915/problem/G
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e5 + 10;
//
//struct Edge {
//	int v;
//	ll w;
//
//};
//
//ll x[MAXN];
//int n, q;
//ll ans = 0;
//vector<Edge>adj[MAXN];
//
//void dfs(int u, int fa, int l, int r) {
//
//	if (l > r)
//		return;
//
//	vector<Edge>son;
//
//	for (auto& it : adj[u]) {
//		if (it.v != fa)
//			son.push_back(it);
//	}
//
//	sort(son.begin(), son.end(), [](const Edge& a, const Edge& b) {
//		return a.w < b.w;
//		});
//
//	int cl = l;
//	for (int i = 0; i < son.size(); ++i) {
//		ll w = son[i].w;
//		int v = son[i].v;
//		ll nw;
//		if (i + 1 < son.size())
//			nw = son[i + 1].w;
//		else
//			nw = 1e18;
//
//		int pl = lower_bound(x + cl, x + r + 1, w + 1) - x;
//		
//		if (i == 0 && pl > cl) 
//			ans += (ll)u * (pl - cl);
//		
//		int pr = upper_bound(x + cl, x + r + 1, nw) - x - 1;
//
//		if (pl <= pr)
//			dfs(v, u, pl, pr);
//		cl = pr + 1;
//	}
//
//	ans += (ll)u * (r - cl + 1);
//}
//
//void solve() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	ans = 0;
//	cin >> n >> q;
//
//	for (int i = 1; i <= n; i++)
//		adj[i].clear();
//
//	for (int i = 1; i < n; ++i) {
//		int u, v;
//		ll w;
//		cin >> u >> v >> w;
//		adj[u].push_back({ v, w });
//		adj[v].push_back({ u, w });
//	}
//
//	for (int i = 1; i <= q; ++i)
//		cin >> x[i];
//
//	sort(x + 1, x + q + 1);
//
//	dfs(1, 0, 1, q);
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//	while (T--) 
//		solve();
//	
//	return 0;
//}
