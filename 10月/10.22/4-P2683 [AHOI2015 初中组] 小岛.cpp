//
//
////https://www.luogu.com.cn/problem/P2683
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
//
//using namespace std;
//
//typedef long long ll;
//
//const int INF = 1e9;
//
//int dist[105][105];
//int n, m;
//
//void solve() {
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j) {
//			if (i != j)
//				dist[i][j] = INF;
//
//		}
//
//
//	for (int i = 1; i <= m; ++i) {
//		int op;
//		cin >> op;
//
//		if (op == 0) {
//			int s, t;
//			cin >> s >> t;
//			if (dist[s][t] == INF)
//				cout << "-1\n";
//			else
//				cout << dist[s][t] << "\n";
//		}
//		else {
//			int u, v, w;
//			cin >> u >> v >> w;
//
//			if (w < dist[u][v]) {
//
//				dist[u][v] = dist[v][u] = w;
//
//				for (int i = 1; i <= n; ++i) {
//					for (int j = 1; j <= n; ++j) {
//						dist[i][j] = min(dist[i][u] + dist[u][v] + dist[v][j], dist[i][j]);
//						dist[i][j] = min(dist[i][v] + dist[v][u] + dist[u][j], dist[i][j]);
//
//					}
//				}
//
//			}
//		}
//	}
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