//
//
//
//
//
////https://codeforces.com/gym/106760/problem/D
//
//
//
//
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//
//using namespace std;
//
//const int MAXN = 1010;
//
//int head[MAXN], to[MAXN << 1], nxt[MAXN << 1];
//int cnt;
//
//inline void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//int n, m;
//
//void solve() {
//	cnt = 1;
//	memset(head, 0, sizeof(head));
//
//	cin >> n >> m;
//
//	vector<vector<bool>>adj(n + 1, vector<bool>(n + 1, false));
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		add(u, v);
//		add(v, u);
//
//	}
//
//	for (int i = 1; i <= n; ++i) {
//
//		for (int j = head[i]; j; j = nxt[j]) {
//			int v = to[j];
//			adj[i][v] = 1;
//		}
//
//		for (int j = head[i]; j; j = nxt[j]) {
//			int v1 = to[j];
//			for (int k = head[i]; k; k = nxt[k]) {
//				int v2 = to[k];
//
//				adj[v1][v2] = 1;
//			}
//		}
//	}
//
//	vector<pair<int, int>>ans;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = i + 1; j <= n; ++j) {
//			if (adj[i][j])
//				ans.emplace_back(i, j);
//		}
//	}
//
//	cout << ans.size() << "\n";
//	for (auto it : ans)
//		cout << it.first << " " << it.second << "\n";
//
//	return;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//	return 0;
//}
