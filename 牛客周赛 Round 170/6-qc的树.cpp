//
//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<climits>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//
//int n;
//int c[MAXN];
//
//int head[MAXN], to[MAXN << 1], nxt[MAXN << 1];
//int cnt = 1;
//
//inline void add(int u, int v) {
//    to[cnt] = v;
//    nxt[cnt] = head[u];
//    head[u] = cnt++;
//}
//
//// val统计同色边-异色边
//ll val[MAXN];
////以i为起点，向子树方向延伸的最大路径贡献
//ll dp[MAXN];
//
//// base是原本异色边的数量
//ll base = 0, res = 0;
//
//// 计算改变一条路径的最大增加量
//void dfs(int u, int f) {
//
//    //两个方向 p1存最大的 
//    ll p1 = 0, p2 = 0;
//
//    for (int i = head[u]; i; i = nxt[i]) {
//        int v = to[i];
//
//        if (v == f)
//            continue;
//
//        dfs(v, u);
//
//        ll w = (c[u] == c[v]) ? 1 : -1;
//        ll cur = dp[v] - 2 * w;
//
//        if (cur > p1) {
//            p2 = p1;
//            p1 = cur;
//        }
//        else if (cur > p2) {
//            p2 = cur;
//        }
//    }
//
//    dp[u] = val[u] + p1;
//
//    res = max(res, val[u] + p1 + p2);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> c[i];
//
//    for (int i = 1; i < n; ++i) {
//        int u, v;
//        cin >> u >> v;
//
//        add(u, v);
//        add(v, u);
//
//        int w = (c[u] == c[v] ? 1 : -1);
//
//        val[u] += w;
//        val[v] += w;
//
//        if (w == -1)
//            ++base;
//    }
//
//    dfs(1, 0);
//
//    cout << base + res << "\n";
//
//    return 0;
//}
