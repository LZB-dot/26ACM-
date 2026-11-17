//
////我的代码实现能力有点薄弱
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 15;
//
//int n;
//vector<string> grid;
//vector<pair<int, int>> num;
//vector<vector<int>> vis2;
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//int color[MAXN];
//
//void dfs(int u, 
//    vector<bool>& col,
//    vector<bool>& row,
//    vector<vector<int>>& vis2) {
//
//    if (u > n)
//        return;
//
//    queue<pair<int, int>> q;
//
//    int x = num[u].first;
//    int y = num[u].second;
//
//    vector<pair<int, int>> add;
//
//    vis2[x][y] = color[u];
//    add.push_back({ x,y });
//
//    q.push({ x,y });
//
//    while (!q.empty()) {
//        int sx = q.front().first;
//        int sy = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; ++i) {
//            int tx = sx + dx[i];
//            int ty = sy + dy[i];
//
//            if (tx <= 0 || ty <= 0 || tx > n || ty > n)
//                continue;
//
//            if (vis2[tx][ty] != 0)
//                continue;
//
//            if (grid[tx][ty] != '.')
//                continue;
//
//            if (!row[tx] && !col[ty])
//                continue;
//
//            if (tx > x)
//                continue;
//
//            vis2[tx][ty] = color[u];
//            add.push_back({ tx,ty });
//
//            q.push({ tx,ty });
//        }
//    }
//
//    // 找到当前行中包含起点 y 的连续同色区间
//    int l = y, r = y;
//
//    while (l > 1 && vis2[x][l - 1] == color[u])
//        --l;
//
//    while (r < n && vis2[x][r + 1] == color[u])
//        ++r;
//
//    // 记录本轮 BFS 的格子，方便后面重新检查连通性
//    vector<vector<bool>> inRound(n + 1, vector<bool>(n + 1, false));
//
//    for (auto p : add) 
//        inRound[p.first][p.second] = true;
//
//    // 回撤当前行连续区间以外的格子
//    for (auto p : add) {
//        int a = p.first;
//        int b = p.second;
//
//        if (a == x && (b < l || b > r)) {
//            vis2[a][b] = 0;
//            inRound[a][b] = false;
//        }
//    }
//
//    // 从当前车辆所在位置重新 BFS
//    // 检查剩余格子是否仍然与起点连通
//    vector<vector<bool>> vis(n + 1, vector<bool>(n + 1, false));
//    queue<pair<int, int>> q2;
//
//    q2.push({ x,y });
//    vis[x][y] = true;
//
//    while (!q2.empty()) {
//        int sx = q2.front().first;
//        int sy = q2.front().second;
//        q2.pop();
//
//        for (int i = 0; i < 4; ++i) {
//            int tx = sx + dx[i];
//            int ty = sy + dy[i];
//
//            if (tx <= 0 || ty <= 0 || tx > n || ty > n)
//                continue;
//
//            if (vis[tx][ty])
//                continue;
//
//            if (!inRound[tx][ty])
//                continue;
//
//            if (vis2[tx][ty] != color[u])
//                continue;
//
//            vis[tx][ty] = true;
//            q2.push({ tx,ty });
//        }
//    }
//
//    // 将本轮中失去连通性的格子回撤
//    for (auto p : add) {
//        int a = p.first;
//        int b = p.second;
//
//        if (!vis[a][b]) 
//            vis2[a][b] = 0;
//        
//    }
//
//    // 当前车辆的行列限制留给后面的车辆
//    row[x] = true;
//    col[y] = true;
//
//    dfs(u + 1, col, row, vis2);
//}
//
//void solve() {
//    cin >> n;
//
//    grid.resize(n + 1);
//
//    num.clear();
//    num.push_back({ 0,0 });
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> grid[i];
//        grid[i] = " " + grid[i];
//
//        for (int j = 1; j <= n; ++j) {
//            if (grid[i][j] >= '1' && grid[i][j] <= '9') {
//                num.push_back({ i,j });
//                color[num.size() - 1] = grid[i][j] - '0';
//            }
//        }
//    }
//
//    vector<bool> col(n + 1, false);
//    vector<bool> row(n + 1, false);
//
//    vis2.assign(n + 1, vector<int>(n + 1, 0));
//
//    dfs(1, col, row, vis2);
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) 
//                cout << vis2[i][j];
//        cout << '\n';
//    }
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