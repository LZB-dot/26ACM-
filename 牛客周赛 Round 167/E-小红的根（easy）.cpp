//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//const int MAXM = 4e5 + 10;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt = 1;
//
//int op, a, b;
//int son[MAXN];
//int sson[MAXN];
//
//inline void add(int u, int v) {
//    to[cnt] = v;
//    nxt[cnt] = head[u];
//    head[u] = cnt++;
//}
//
//bool dfs(int u, int fa) {
//    sson[u] = 1;
//    son[u] = 1;
//
//    bool f = (u == b) ? true : false;
//
//    for (int i = head[u]; i; i = nxt[i]) {
//        int v = to[i];
//
//        if (v != fa) {
//
//            bool tmp = dfs(v, u);
//            son[u] += son[v];
//
//            if (tmp)
//                f = 1;
//            else
//                sson[u] += sson[v];
//        }
//    }
//
//    return f;
//}
//
//void solve() {
//    int n, k;
//    cin >> n >> k;
//
//    for (int i = 1; i < n; ++i) {
//        int u, v;
//        cin >> u >> v;
//        add(u, v);
//        add(v, u);
//    }
//
//    cin >> op >> a >> b;
//
//    dfs(a, 0);
//    if (op == 1)
//        cout << sson[a] << "\n";
//    else
//        cout << son[a] - sson[a] << "\n";
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