//
////http://poj.org/problem?id=1201
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
//const int MAXN = 5e5 + 10;
//const int MAXM = 1e6 + 10;
//const int INF = 1e9;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt;
//
//int n;
//int mx = 0;
//int dist[MAXN], update[MAXN];
//bool in[MAXN];
//
//void init() {
//	cnt = 1;
//
//	for (int i = 0; i < MAXN; ++i) {
//		head[i] = 0;
//		dist[i] = -INF;
//		update[i] = 0;
//		in[i] = false;
//	}
//
//}
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//bool spfa() {
//	queue<int>q;
//	q.push(0);
//	in[0] = true;
//	update[0] = 1;
//	dist[0] = 0;
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		in[u] = false;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int w = weight[i];
//
//
//			if (dist[v] < dist[u] + w) {
//				dist[v] = dist[u] + w;
//
//				q.push(v);
//				if (!in[v]) {
//					in[v] = true;
//
//					if (++update[v] > mx+2)
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
//	cin >> n;
//	init();
//
//	for (int i = 1; i <= n; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//
//		mx = max(mx, v);
//		add(u, v+1, w);
//	}
//
//
//
//	for (int i = 0; i <= mx; ++i) {
//		add(i, i + 1, 0);	// s[i] <= s[i+1]
//		add(i + 1, i, -1);  // s[i+1] - s[i] <= 1
//	}
//
//	bool f = spfa();
//	cout << dist[mx+1] << "\n";
//
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