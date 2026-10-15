//
//
////http://poj.org/problem?id=3259
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//
//using namespace std;
//
//const int MAXN = 505;
//const int MAXM = 1e4 + 10;
//const int INF = 1e9;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt;
//
//int n, m, w;
//bool in[MAXN];
//int update[MAXN];
//int dist[MAXN];
//
//void init(int n) {
//
//	for (int i = 0; i <= n; ++i) {
//		head[i] = 0;
//		update[i] = 0;
//		in[i] = false;
//		dist[i] = INF;
//	}
//
//	cnt = 1;
//}
//
//void add(int u, int v, int t) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = t;
//	head[u] = cnt++;
//}
//
//
//bool spfa() {
//
//	queue<int>q;
//	q.push(0);
//	in[0] = 1;
//	dist[0] = 0;
//	update[0] = 1;
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		in[u] = false;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int t = weight[i];
//
//			if (dist[v] > dist[u] + t) {
//				dist[v] = dist[u] + t;
//
//				if (!in[v]) {
//					q.push(v);
//					in[v] = 1;
//
//					if (++update[v] > n)
//						return true;
//				}
//			}
//		}
//	}
//
//	return false;
//}
//
//void solve() {
//	cin >> n >> m >> w;
//
//	init(n);
//
//	for (int i = 1; i <= n; ++i)
//		add(0, i, 0);
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, t;
//		cin >> u >> v >> t;
//
//		add(u, v, t);
//		add(v, u, t);
//	}
//
//	for (int i = 1; i <= w; ++i) {
//		int u, v, t;
//		cin >> u >> v >> t;
//
//		add(u, v, -t);
//	}
//
//	if (!spfa())
//		cout << "NO\n";
//	else
//		cout << "YES\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while(T--)
//		solve();
//
//	return 0;
//}