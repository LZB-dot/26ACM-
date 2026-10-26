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
//int dfn[MAXN], out[MAXN];
//int timer = 1;
//
//int depth[MAXN];
//int stjump[MAXN][20];
//int diff[MAXN];
//
//inline void add(int u, int v) {
//    to[cnt] = v;
//    nxt[cnt] = head[u];
//    head[u] = cnt++;
//}
//
//
//void dfs(int u, int fa) {
//    dfn[u] = timer++;
//    depth[u] = depth[fa] + 1;
//    stjump[u][0] = fa;
//
//    for (int i = 1; i < 20; ++i)
//        stjump[u][i] = stjump[stjump[u][i - 1]][i - 1];
//
//    for (int i = head[u]; i; i = nxt[i]) {
//        int v = to[i];
//
//        if (v != fa)
//            dfs(v, u);
//    }
//
//    out[u] = timer;
//
//}
//
//bool check(int u, int v) {
//    return (dfn[u] <= dfn[v] && dfn[v] < out[u]);
//}
//
//int getSon(int u, int v) {
//    for (int i = 19; i >= 0; --i) {
//        if (depth[stjump[v][i]] > depth[u])
//            v = stjump[v][i];
//    }
//
//    return v;
//}
//
//int LCA(int u, int v) {
//    if (depth[u] < depth[v])
//        swap(u, v);
//
//    for (int i = 19; i >= 0; --i) {
//        if (depth[stjump[u][i]] >= depth[v])
//            u = stjump[u][i];
//    }
//
//    if (u == v)
//        return u;
//
//    for (int i = 19; i >= 0; --i) {
//        if (stjump[u][i] != stjump[v][i]) {
//            u = stjump[u][i];
//            v = stjump[v][i];
//        }
//    }
//
//    return stjump[u][0];
//}
//
//void addDiff(int l, int r, int n) {
//    if (l > r)
//        return;
//
//    l = max(1, l);
//    r = min(r, n);
//
//    if (l <= r) {
//        diff[l]++;
//        diff[r + 1]--;
//    }
//}
//
//void solve() {
//    int n, k;
//    cin >> n >> k;
//
//    int ck = k;
//
//    for (int i = 1; i < n; ++i) {
//        int u, v;
//        cin >> u >> v;
//        add(u, v);
//        add(v, u);
//    }
//
//    dfs(1, 0);
//
//    bool f = 1;
//
//    while (k--) {
//        int op, a, b;
//        cin >> op >> a >> b;
//
//        if (!f)
//            continue;
//
//        if (op == 1) {
//
//            if (check(a, b)) {
//                int c = getSon(a, b);
//                addDiff(1, dfn[c] - 1, n);
//                addDiff(out[c], n, n);
//            }
//            else if (check(b, a))
//                addDiff(dfn[a], out[a] - 1, n);
//            else
//                addDiff(dfn[a], out[a] - 1, n);
//        }
//        else if (op == 2) {
//            if (check(a, b) || check(b, a))
//                f = 0;
//            else {
//                int d1 = dfn[a], o1 = out[a];
//                int d2 = dfn[b], o2 = out[b];
//                
//                if (d1 > d2) {
//                    swap(d1, d2);
//                    swap(o1, o2);
//                }
//
//                addDiff(1, d1 - 1, n);
//                addDiff(o1, d2 - 1, n);
//                addDiff(o2, n, n);
//            }
//
//        }
//
//        if (a == b) {
//            f = 0;
//            continue;
//        }
//
//    }
//
//    if (!f) {
//        cout << "0\n";
//        return;
//    }
//
//    int ans = 0;
//    int sum = 0;
//
//    for (int i = 1; i <= n; ++i) {
//        sum += diff[i];
//        if (sum == ck)
//            ++ans;
//    }
//
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