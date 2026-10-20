//
////https://www.luogu.com.cn/problem/P1137
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//
//using namespace std;
//
//const int MAXN = 1e5 + 10;
//const int MAXM = 2e5 + 10;
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
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<int>deg(n + 1, 0);
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//		deg[v]++;
//		add(u, v);
//	}
//
//	queue<int>q;
//	vector<int>dp(n + 1, 1);
//
//	for (int i = 1; i <= n; ++i)
//		if (deg[i] == 0)
//			q.push(i);
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//
//			if (dp[v] < dp[u] + 1)
//				dp[v] = dp[u] + 1;
//
//			if (--deg[v] == 0)
//				q.push(v);
//		}
//	}
//
//	for (int i = 1; i <= n; ++i)
//		cout << dp[i] << '\n';
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