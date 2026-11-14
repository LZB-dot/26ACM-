//
////https://codeforces.com/gym/106356/problem/C
//
////1-要考虑修改的边是否存在
////2-要寻找一条路径 然后倒过来翻转
////3-要删边以及添加边
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//#include<cstdlib>
//#include<ctime>
//#include<set>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e6 + 10;
//
//int n;
//vector<int>a;
//vector<vector<int>>ans;
//vector<set<int>>adj;
//unordered_map<int, int>vis;
//
//inline void add(int u, int v) {
//    adj[u].insert(v);
//    adj[v].insert(u);
//}
//
//inline void del(int u, int v) {
//    adj[u].erase(v);
//    adj[v].erase(u);
//}
//
//vector<int> get_path(int u, int v) {
//    vector<int>fa(n + 1, -1);
//    queue<int>q;
//
//    q.push(u);
//    fa[u] = 0;
//
//    while (!q.empty()) {
//        int x = q.front();
//        q.pop();
//
//        if (x == v)
//            break;
//
//        for (int y : adj[x]) {
//            if (fa[y] == -1) {
//                fa[y] = x;
//                q.push(y);
//            }
//        }
//    }
//
//    vector<int>path;
//
//    int x = v;
//    while (x != 0) {
//        path.push_back(x);
//        x = fa[x];
//    }
//
//    reverse(path.begin(), path.end());
//
//    return path;
//}
//
//void dfs(int u, int p) {
//    if (p > n)
//        return;
//
//    int v = a[p];
//
//    vector<int>path = get_path(u, v);
//
//    for (int j = 1; j + 1 < path.size(); ++j) {
//        int x = path[j];
//        int y = path[j + 1];
//
//        ans.push_back({ u, x, y });
//
//        del(u, x);
//        add(u, y);
//    }
//
//    vis[u] = 1;
//
//    vector<int>tmp(adj[u].begin(), adj[u].end());
//
//    for (int x : tmp) {
//        if (x == v || vis[x])
//            continue;
//
//        ans.push_back({ x, u, v });
//
//        del(x, u);
//        add(x, v);
//    }
//
//    vis[v] = 1;
//
//    dfs(v, p + 1);
//}
//
//void solve() {
//    cin >> n;
//
//    ans.clear();
//    vis.clear();
//
//    a.assign(n + 1, 0);
//    adj.assign(n + 1, {});
//
//    for (int i = 1; i <= n; ++i)
//        cin >> a[i];
//
//    for (int i = 1; i < n; ++i) {
//        int u, v;
//        cin >> u >> v;
//
//        add(u, v);
//    }
//
//    vis[a[1]] = 1;
//
//    dfs(a[1], 2);
//
//    cout << ans.size() << "\n";
//
//    for (auto it : ans)
//        cout << it[0] << " " << it[1] << " " << it[2] << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--)
//        solve();
//
//    return 0;
//}
