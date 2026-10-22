//
////https://www.luogu.com.cn/problem/P1462
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//#include<random>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e4 + 10;
//const int MAXM = 1e5 + 10;
//const int INF = 1e9 + 10;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt = 1;
//
//int f[MAXN];
//int c[MAXM];
//
//
//int n, m, b;
//
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	c[cnt] = w;
//	head[u] = cnt++;
//}
//
//bool check(int mid) {
//	if (mid < f[1] || mid < f[n])
//		return false;
//
//	vector<int>dist(n + 1, INF);
//	vector<bool>vis(n + 1, false);
//	
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
//	pq.push({ 0,1 });
//	dist[1] = 0;
//
//	while (!pq.empty()) {
//		auto it = pq.top();
//		pq.pop();
//
//		int u = it.second;
//
//		if (vis[u])
//			continue;
//
//		vis[u] = 1;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int w = c[i];
//
//			if (f[v] > mid)
//				continue;
//
//			if (dist[v] > dist[u] + w) {
//				dist[v] = dist[u] + w;
//				pq.push({ dist[v],v });
//			}
//		}
//
//	}
//
//	return dist[n] <= b;
//}
//
//void solve() {
//	cin >> n >> m >> b;
//
//	int l = 0, r = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> f[i];
//		r = max(r, f[i]);
//	}
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//
//		add(u, v, w);
//		add(v, u, w);
//	}
//
//	int ans = -1;
//	while (l <= r) {
//		int mid = l + (r - l >> 1);
//
//		if (check(mid)) {
//			ans = mid;
//			r = mid - 1;
//		}
//		else
//			l = mid + 1;
//
//	}
//
//	if (ans == -1)
//		cout << "AFK\n";
//	else
//		cout << ans << "\n";
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