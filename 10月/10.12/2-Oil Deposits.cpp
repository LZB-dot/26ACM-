//
//
////https://codeforces.com/gym/101879/problem/C
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//int dx[] = { -1,-1,-1,0,1,1,1,0 };
//int dy[] = { -1,0,1,1,1,0,-1,-1 };
//int n, m;
//
//void dfs(int i, int j, const vector<vector<int>>& grid, vector<vector<bool>>& vis) {
//	vis[i][j] = 1;
//
//	for (int k = 0; k < 8; ++k) {
//		int tx = dx[k] + i;
//		int ty = dy[k] + j;
//
//		if (tx >= 1 && ty >= 1 && tx <= n && ty <= m &&!vis[tx][ty] && grid[tx][ty] == 1) {
//			dfs(tx, ty, grid, vis);
//		}
//	}
//
//	};
//
//void solve() {
//	cin >> n >> m;
//
//	while (n != 0) {
//		vector<vector<int>>grid(n + 1, vector<int>(m + 1));
//
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= m; ++j) {
//				char c;
//				cin >> c;
//
//				grid[i][j] = (c == '*' ? 0 : 1);
//			}
//		}
//
//		vector<vector<bool>>vis(n + 1, vector<bool>(m + 1,false));
//
//		int ans = 0;
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= m; ++j) {
//				if (!vis[i][j] && grid[i][j] == 1) {
//					dfs(i, j, grid, vis);
//					++ans;
//				}
//			}
//		}
//
//		cout << ans << "\n";
//
//		cin >> n >> m;
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
//		solve();
//
//
//	return 0;
//}