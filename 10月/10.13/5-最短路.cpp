//
//
//
//
//
////https://acm.hdu.edu.cn/showproblem.php?pid=2544
//
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
//const int MAXN = 110;
//const int MAXM = 2e4 + 10;
//const int INF = 1e9;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt;
//
//inline void add(int u, int v,int w) {
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
//	while (n != 0 && m != 0) {
//
//		cnt = 1;
//		memset(head, 0, sizeof(head));
//
//		vector<int>dist(n+1, INF);
//
//		for (int i = 1; i <= m; ++i) {
//			int u, v, w;
//			cin >> u >> v >> w;
//			add(u, v, w);
//			add(v, u, w);
//		}
//
//		priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
//		q.push({ 0,1 });
//		dist[1] = 0;
//
//		while (!q.empty()) {
//			auto it = q.top();
//			q.pop();
//
//			int uw = it.first;
//			int u = it.second;
//
//			if (uw > dist[u])
//				continue;
//
//			for (int i = head[u]; i; i = nxt[i]) {
//				int v = to[i];
//				int vw = weight[i];
//
//				if (dist[v] > dist[u] + vw) {
//					dist[v] = dist[u] + vw;
//					q.push({ dist[v],v });
//				}
//			}
//		}
//
//		cout << dist[n] << "\n";
//
//		cin >> n >> m;
//	}
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
