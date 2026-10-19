//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<cmath>
//#include<queue>
//
//using namespace std;
//
//#define pii pair<int,int>
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//const int MAXM = 6e5 + 10;
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
//int n, m, a, b, s, t;
//
//
//void bfs(int st, vector<int>& t) {
//	for (int i = 1; i <= n; ++i)
//		t[i] = INT_MAX;
//
//	queue<int>q;
//	t[st] = 0;
//
//	q.push(st);
//	
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//
//			if (t[v] > t[u] + 1) {
//				t[v] = t[u] + 1;
//				q.push(v);
//			}
//
//		}
//	}
//	
//}
//
//void solve() {
//	cin >> n >> m >> a >> b >> s >> t;
//
//	memset(head, 0, sizeof(head));
//	
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//		add(u, v);
//		add(v, u);
//	}
//
//	vector<int>t1(n + 1, 0), t2(n + 1, 0);
//	bfs(a, t1);
//	bfs(b, t2);
//
//	vector<int>tim(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		tim[i] = abs(t1[i] - t2[i]);
//
//	priority_queue<pii,vector<pii>,greater<pii> >pq;
//	vector<bool>vis(n + 1, 0);
//	vector<int>d(n + 1, INT_MAX);
//
//	pq.push({ tim[s],s});
//	d[s] = tim[s];
//
//	while (!pq.empty()) {
//		auto it = pq.top();
//		pq.pop();
//
//		int w = it.first;
//		int u = it.second;
//
//		if (vis[u])
//			continue;
//
//		vis[u] = 1;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//
//			if (vis[v])
//				continue;
//
//			int cur = max(d[u], tim[v]);
//			if (d[v] > cur) {
//				d[v] = cur;
//				pq.push({ cur,v });
//			}
//		}
//	}
//
//	cout << d[t] << "\n";
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