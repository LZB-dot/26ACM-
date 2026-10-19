//
//
//
//// https://acm.hdu.edu.cn/showproblem.php?pid=1285
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
//const int MAXN = 510;
//const int MAXM = 1010;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt;
//int deg[MAXN];
//
//inline void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//void solve() {
//	int n, m;
//	while (cin >> n >> m) {
//		memset(head, 0, sizeof head);
//		memset(deg, 0, sizeof deg);
//		cnt = 1;
//
//		for (int i = 1; i <= m; ++i) {
//			int u, v;
//			cin >> u >> v;
//			add(u, v);
//			deg[v]++;
//		}
//		priority_queue<int, vector<int>, greater<int>> q;
//		for (int i = 1; i <= n; ++i) {
//			if (deg[i] == 0)
//				q.push(i);
//
//		}
//
//		while (!q.empty()) {
//			int u = q.top();
//			q.pop();
//
//			cout << u << " ";
//
//			for (int i = head[u]; i; i = nxt[i]) {
//				int v = to[i];
//
//				if (--deg[v] == 0)
//					q.push(v);
//
//			}
//		}
//		cout << "\n";
//	}
//	
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}
