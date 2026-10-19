//
//
////https://www.luogu.com.cn/problem/P4180
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e5 + 10;
//const int MAXM = 6e5 + 10;
//const ll INF = 1e18;
//
//struct Edge {
//	int u, v, w;
//	bool operator<(const Edge& o)const {
//		return w < o.w;
//	}
//};
//
//int fa[MAXN];
//
//int find(int x) {
//	if (fa[x] != x)
//		fa[x] = find(fa[x]);
//
//	return fa[x];
//}
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt = 1;
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//int stjump[MAXN][20];
//int mx1[MAXN][20], mx2[MAXN][20];
//int depth[MAXN];
//
//pair<int, int> merge(int p1, int p2, int p3, int p4) {
//	int arr[4] = { p1,p2,p3,p4 };
//	int a = -1, b = -1;
//
//	for (int i = 0; i < 4; ++i) {
//		int val = arr[i];
//
//		if (val == -1)
//			continue;
//
//		if (val > a) {
//			b = a;
//			a = val;
//		}
//		else if (val <= a && val > b)
//			b = val;
//	}
//
//	return { a,b };
//}
//
//void dfs(int u, int f, int d, int ew) {
//	stjump[u][0] = f;
//	mx1[u][0] = ew;
//	mx2[u][0] = -1;
//	depth[u] = d;
//
//	for (int i = 1; i < 20; ++i) {
//		stjump[u][i] = stjump[stjump[u][i - 1]][i - 1];
//
//		//Ç°°ë¶Î
//		int p1 = mx1[u][i - 1];
//		int p2 = mx2[u][i - 1];
//		//ºó°ë¶Î
//		int p3 = mx1[stjump[u][i - 1]][i - 1];
//		int p4 = mx2[stjump[u][i - 1]][i - 1];
//
//		auto it = merge(p1, p2, p3, p4);
//		mx1[u][i] = it.first;
//		mx2[u][i] = it.second;
//	}
//
//	for (int i = head[u]; i; i = nxt[i]) {
//		int v = to[i];
//		int w = weight[i];
//
//		if (v != f)
//			dfs(v, u, d + 1, w);
//	}
//}
//
//pair<int, int> query(int u, int v) {
//	if (depth[u] < depth[v])
//		swap(u, v);
//
//	pair<int, int>it;
//
//	int a = -1, b = -1;
//	for (int i = 19; i >= 0; --i) {
//		if (depth[u] - (1 << i) >= depth[v]) {
//			it = merge(a, b, mx1[u][i], mx2[u][i]);
//			a = it.first;
//			b = it.second;
//			u = stjump[u][i];
//		}
//	}
//
//	if (u == v)
//		return { a,b };
//
//	for (int i = 19; i >= 0; --i) {
//		if (stjump[u][i] != stjump[v][i]) {
//
//			it = merge(a, b, mx1[u][i], mx2[u][i]);
//			a = it.first;
//			b = it.second;
//
//			it = merge(a, b, mx1[v][i], mx2[v][i]);
//			a = it.first;
//			b = it.second;
//
//			u = stjump[u][i];
//			v = stjump[v][i];
//		}
//	}
//
//	it = merge(a, b, mx1[u][0], mx2[u][0]);
//	a = it.first;
//	b = it.second;
//	it = merge(a, b, mx1[v][0], mx2[v][0]);
//	a = it.first;
//	b = it.second;
//
//	return { a,b };
//}
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<Edge>e(m + 1);
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		e[i] = { u,v,w };
//	}
//
//	sort(e.begin() + 1, e.end());
//
//	for (int i = 1; i <= n; ++i)
//		fa[i] = i;
//
//	vector<bool>use(m + 1, 0);
//
//	ll sum = 0;
//	int cur = 0;
//
//	for (int i = 1; i <= m; ++i) {
//		int u = e[i].u;
//		int v = e[i].v;
//		int w = e[i].w;
//
//		int fu = find(u);
//		int fv = find(v);
//
//		if (fu != fv) {
//			add(u, v, w);
//			add(v, u, w);
//			fa[fu] = fv;
//			use[i] = 1;
//
//			++cur;
//			sum += w;
//
//			if (cur == n - 1)
//				break;
//		}
//	}
//
//	dfs(1, 0, 1, 0);
//
//	ll ans = INF;
//
//	for (int i = 1; i <= m; ++i) {
//		if (use[i])
//			continue;
//
//		int u = e[i].u;
//		int v = e[i].v;
//		int w = e[i].w;
//
//		if (u == v)
//			continue;
//
//		auto tmp = query(u, v);
//
//		int a = tmp.first;
//		int b = tmp.second;
//
//		if (w > a)
//			ans = min(ans, sum - a + w);
//		else if (w == a && b != -1 && b < w)
//			ans = min(ans, sum - b + w);
//	}
//
//	cout << ans << "\n";
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