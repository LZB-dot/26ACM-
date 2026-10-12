//
//
////http://poj.org/problem?id=1979
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int n, m;
//int ans;
//
//void dfs(int i, int j, const vector<vector<char>>& grid, vector<vector<bool>>& vis) {
//	vis[i][j] = 1;
//	++ans;
//
//	for (int k = 0; k < 4; ++k) {
//		int tx = dx[k] + i;
//		int ty = dy[k] + j;
//
//		if (tx >= 1 && ty >= 1 && tx <= n && ty <= m && !vis[tx][ty] && (grid[tx][ty] == '.' || grid[tx][ty] == '@')) {
//			dfs(tx, ty, grid, vis);
//		}
//	}
//
//};
//
//void solve() {
//	cin >> m >> n;
//
//	while (n != 0 && m != 0) {
//		vector<vector<char>>grid(n + 1, vector<char>(m + 1));
//
//		int sx, sy;
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= m; ++j) {
//				cin >> grid[i][j];
//
//				if (grid[i][j] == '@') {
//					sx = i;
//					sy = j;
//				}
//			}
//		}
//
//		vector<vector<bool>>vis(n + 1, vector<bool>(m + 1, false));
//
//		ans = 0;
//		dfs(sx, sy, grid, vis);
//
//		cout << ans << "\n";
//
//		cin >> m >> n;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	//int T;
//	//cin >> T;
//
//	//while (T--)
//	solve();
//
//
//	return 0;
//}