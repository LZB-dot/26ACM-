//
////https://www.luogu.com.cn/problem/P2419
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
//const int MAXN = 110;
//
//int n, m;
//vector<bitset<MAXN>>g;
//
//void Floyd() {
//
//	for (int bridge = 1; bridge <= n; ++bridge) {
//
//		for (int i = 1; i <= n; ++i) {
//			if (g[i][bridge])
//				g[i] |= g[bridge];
//		}
//	}
//}
//
//void solve() {
//	cin >> n >> m;
//	g.resize(n + 1);
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		g[u][v] = 1;
//	}
//
//	Floyd();
//
//	int ans = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		int cnt = 0;
//
//		for (int j = 1; j <= n; ++j) {
//			if (i == j)
//				continue;
//
//			if (g[i][j] || g[j][i])
//				++cnt;
//		}
//
//		if (cnt == n - 1)
//			++ans;
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