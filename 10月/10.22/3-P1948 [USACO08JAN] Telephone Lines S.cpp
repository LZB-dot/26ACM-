//
////https://www.luogu.com.cn/problem/P1948
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
//const int MAXN = 1e3 + 10;
//const int MAXM = 2e4 + 10;
//const int INF = 1e9 + 10;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt = 1;
//
//int n, m, k;
//
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//bool dijkstra(int mid) {
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
//		if (u == n)
//			break;
//
//		vis[u] = 1;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int w = weight[i];
//
//			int cost = (w > mid ? 1 : 0);
//
//			if (dist[v] > dist[u] + cost) {
//				dist[v] = dist[u] + cost;
//				pq.push({ dist[v],v });
//			}
//		}
//
//
//	}
//
//	return dist[n] <= k;
//}
//
//void solve() {
//	cin >> n >> m >> k;
//
//	int l = 0, r = 0;
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//
//		add(u, v, w);
//		add(v, u, w);
//	
//		r = max(r, w);
//	}
//
//	int ans = -1;
//	while (l <= r) {
//		int mid = l + (r - l >> 1);
//
//
//		if (dijkstra(mid)) {
//			ans = mid;
//			r = mid - 1;
//		}
//		else
//			l = mid + 1;
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