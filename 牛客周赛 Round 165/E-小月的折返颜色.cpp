////
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<climits>
////#include<unordered_map>
////#include<queue>
////
////using namespace std;
////
////typedef long long ll;
////
////const int MAXN = 2e5 + 10;
////
////int head[MAXN], to[MAXN << 1], nxt[MAXN << 1], weight[MAXN << 1];
////int cnt = 1;
////
////int depth[MAXN], stjump[MAXN][20];
////
////int color[MAXN];
////unordered_map<int, vector<ll>>counts[MAXN];
////ll ans = 0;
////
////void add(int u, int v, int w) {
////	to[cnt] = v;
////	nxt[cnt] = head[u];
////	weight[cnt] = 1;
////	head[u] = cnt++;
////}
////
////void dfs(int u, int fa) {
////	counts[u][color[u]] = { 1,0,0 };
////
////	for (int i = head[u]; i; i = nxt[i]) {
////		int v = to[i];
////
////		if (v != fa) {
////			dfs(v, u);
////
////			int w = (color[u] == color[v] ? 0 : 1);
////
////			for (auto& it : counts[v]) {
////				int c = it.first;
////				auto& t1 = it.second;
////
////				if (counts[u].count(c)) {
////					auto& t2 = counts[u][c];
////
////					for (int p1 = 0; p1 <= 2; ++p1) {
////						for (int p2 = 0; p2 <= 2; ++p2) {
////							if (p1 + p2 + w == 2)
////								ans += t1[p1] * t2[p2];
////						}
////					}
////				}
////			}
////
////			for (auto& it : counts[v]) {
////				int c = it.first;
////				auto& t1 = it.second;
////
////				if (counts[u].count(c) == 0)
////					counts[u][c] = { 0,0,0 };
////				auto& t2 = counts[u][c];
////
////				for (int p = 0; p <= 2; ++p) {
////					int tmp = p + w;
////					if (tmp <= 2)
////						t1[tmp] += t2[p];
////				}
////			}
////
////			counts[v].clear();
////
////		}
////	}
////
////
////}
////
////void solve() {
////	int n;
////	cin >> n;
////
////	for (int i = 1; i <= n; ++i)
////		cin >> color[i];
////
////	for (int i = 1; i <= n - 1; ++i) {
////		int u, v;
////		cin >> u >> v;
////		int w = (color[u] == color[v] ? 0 : 1);
////		add(u, v, w);
////		add(v, u, w);
////	}
////
////
////	dfs(1, 0);
////
////	cout << ans << "\n";
////
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	//int T;
////	//cin >> T;
////
////	//while (T--)
////	solve();
////
////
////	return 0;
////}
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//const int MAXM = MAXN << 1;
//
//int fa[MAXN], sz[MAXN];
//
//int find(int x) {
//	if (fa[x] != x)
//		fa[x] = find(fa[x]);
//
//	return fa[x];
//}
//
//void merge(int x, int y) {
//	int fx = find(x);
//	int fy = find(y);
//
//	if (fx == fy)
//		return;
//
//	if (sz[fx] < sz[fy])
//		swap(fx, fy);
//
//	fa[fy] = fx;
//	sz[fx] += sz[fy];
//}
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt = 1;
//
//inline void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//int color[MAXN];
//pair<int, int>edges[MAXN];
//
//ll counts[MAXN];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> color[i];
//		fa[i] = i;
//		sz[i] = 1;
//	}
//
//	//相邻点合并
//	for (int i = 1; i <= n - 1; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		edges[i] = { u,v };
//		if (color[u] == color[v])
//			merge(u, v);
//
//	}
//
//	//缩点建图
//	for (int i = 1; i <= n - 1; ++i) {
//		int u = edges[i].first;
//		int v = edges[i].second;
//
//		int fu = find(u);
//		int fv = find(v);
//
//		if (fu != fv) {
//			add(fu, fv);
//			add(fv, fu);
//		}
//	}
//
//	ll ans = 0;
//
//	for (int mid = 1; mid <= n; ++mid) {
//		for (int i = head[mid]; i; i = nxt[i]) {
//			int v = to[i];
//			int c = color[v];
//
//			ll s = sz[find(v)];
//			ans += s * counts[c];
//			counts[c] += s;
//		}
//
//		for (int i = head[mid]; i; i = nxt[i]) {
//			int v = to[i];
//			int c = color[v];
//
//			counts[c] = 0;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}