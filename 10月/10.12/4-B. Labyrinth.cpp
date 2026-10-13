//
////https://codeforces.com/problemset/problem/1063/B
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//const int MAXN = 2005;
//const int INF = 1e9;
//
//char grid[MAXN][MAXN];
//
//
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//
//int dist[MAXN][MAXN];
//
//struct Node {
//    int x, y, l;
//};
//
//void solve() {
//    int n, m;
//    cin >> n >> m;
//
//    int r, c;
//    cin >> r >> c;
//
//    int X, Y;
//    cin >> X >> Y;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> grid[i][j];
//            dist[i][j] = INF;
//        }
//    }
//
//    deque<Node> q;
//    q.push_back({ r, c, 0 });
//    dist[r][c] = 0;
//
//    while (!q.empty()) {
//        auto it = q.front();
//        q.pop_front();
//
//        if (it.l > dist[it.x][it.y])
//            continue;
//
//        for (int i = 0; i < 4; ++i) {
//            int tx = it.x + dx[i];
//            int ty = it.y + dy[i];
//
//            if (tx >= 1 && ty >= 1 && tx <= n && ty <= m && grid[tx][ty] == '.') {
//                if (i == 2) {
//                    int nl = it.l;
//                    int nr = ty - c + nl;
//
//                    if (nr <= Y && nl < dist[tx][ty]) {
//                        dist[tx][ty] = nl;
//                        q.push_back({ tx, ty, nl }); 
//                    }
//                }
//                else if (i == 3) { 
//                    int nl = it.l + 1;
//                    int nr = ty - c + nl;
//
//                    if (nl <= X && nr <= Y && nl < dist[tx][ty]) {
//                        dist[tx][ty] = nl;
//                        q.push_back({ tx, ty, nl });
//                    }
//                }
//                else { 
//                    int nl = it.l;
//                    int nr = ty - c + nl;
//
//                    if (nr <= Y && nl < dist[tx][ty]) {
//                        dist[tx][ty] = nl;
//                        q.push_front({ tx, ty, nl }); 
//                    }
//                }
//            }
//        }
//    }
//
//    int ans = 0;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (dist[i][j] != INF) 
//                ans++;
//        }
//    }
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    solve();
//
//    return 0;
//}