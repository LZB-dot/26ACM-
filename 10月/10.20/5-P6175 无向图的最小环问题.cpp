//
////https://www.luogu.com.cn/record/304429236
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<climits>
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 110;
//const int INF = 0x3f3f3f3f;
//
//int g[MAXN][MAXN];//邻接矩阵
//int dist[MAXN][MAXN];//i到j，允许通过1到k-1的点的最短距离
//int pos[MAXN][MAXN];//记录i到j的最短路径的中转中间点
//
//ll mi;
//int n, m;
//vector<int> path;//最小环序列
//
//void get_path(int i, int j) {
//
//    int k = pos[i][j];
//    if (k == -1) //直接相连
//        return;
//
//    get_path(i, k);//先递归取出 i 到 k 的所有中间节点
//    path.push_back(k);//把中间点k存入路径数组
//    get_path(k, j);//再递归取出 k 到 j 的所有中间节点
//}
//
//void solve() {
//
//    cin >> n >> m;
//
//    mi = INF;
//    path.clear();
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            g[i][j] = dist[i][j] = INF;
//            pos[i][j] = -1;
//        }
//        g[i][i] = dist[i][i] = 0;
//    }
//
//    for (int i = 1; i <= m; ++i) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        if (w < g[u][v]) {
//            g[u][v] = g[v][u] = w;
//            dist[u][v] = dist[v][u] = w;
//        }
//    }
//
//    //k代表当前候选环内编号最大的顶点
//    for (int k = 1; k <= n; ++k) {
//
//        //枚举i，j寻找候选环
//        for (int i = 1; i < k; ++i) {
//            for (int j = i + 1; j < k; ++j) {
//
//                if (dist[i][j] != INF && g[j][k] != INF && g[k][i] != INF) {
//                    // 候选环总长度 = i到j的最短路 + j-k直接边 + k-i直接边
//                    ll cur = 1LL * dist[i][j] + g[j][k] + g[k][i];
//
//                    if (cur < mi) {
//                        mi = cur;
//                         path.clear();
//
//                         path.push_back(i);
//                         get_path(i, j); // 展开 i 到 j 的中间节点
//                         path.push_back(j);
//                         path.push_back(k); // 环的最后经过 k
//                    }
//                }
//            }
//        }
//
//        //现在允许后续更大的k轮次，把当前k作为中转点，更新任意两点最短距离
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= n; ++j) {
//
//                if (dist[i][k] != INF && dist[k][j] != INF) {
//
//                    ll sum = 1LL * dist[i][k] + dist[k][j];
//
//                    if (dist[i][j] > sum) {
//
//                        dist[i][j] = (int)sum;
//                        pos[i][j] = k;
//                    }
//                }
//            }
//        }
//    }
//
//    if (mi == INF)
//        cout << "No solution.\n";
//    else
//        cout << mi << '\n';
//
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
