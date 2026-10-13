//
//
//
//
//
////https://www.luogu.com.cn/problem/P2865
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<unordered_map>
//#include<queue>
//
//using namespace std;
//
//const int MAXN = 5010;
//const int MAXM = 2e5 + 10;
//const int INF = 1e9;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt;
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//int n, m;
//
//void solve() {
//	cin >> n >> m;
//
//
//	cnt = 1;
//	memset(head, 0, sizeof(head));
//
//	vector<pair<int, int>>dist(n + 1, { INF,INF });
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		add(u, v, w);
//		add(v, u, w);
//	}
//
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
//	q.push({ 0,1 });
//	dist[1].first = 0;
//
//	while (!q.empty()) {
//		auto it = q.top();
//		q.pop();
//
//		int uw = it.first;
//		int u = it.second;
//
//		if (uw > dist[u].second)
//			continue;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int vw = weight[i];
//
//			if (dist[v].first > uw + vw) {
//				dist[v].second = dist[v].first;
//				dist[v].first = uw + vw;
//				q.push({ dist[v].first,v });
//			}
//			else if (uw + vw > dist[v].first && dist[v].second > uw + vw) {
//				dist[v].second = uw + vw;
//				q.push({ dist[v].second, v });
//			}
//		}
//	}
//
//	cout << dist[n].second << "\n";
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	solve();
//
//	return 0;
//}
//
