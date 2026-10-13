//
//
////https://codeforces.com/gym/101879/problem/C
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//
//using namespace std;
//
//const int MAXN = 3e5 + 10;
//
//int fa[MAXN];
//
//int find(int u) {
//	if (fa[u] != u)
//		fa[u] = find(fa[u]);
//	return fa[u];
//}
//
//void unite(int u, int v) {
//	int fu = find(u);
//	int fv = find(v);
//	if (fu != fv)
//		fa[fu] = fv;
//}
//
//int head[MAXN], to[MAXN << 1], nxt[MAXN << 1], eid[MAXN << 1];
//int cnt = 1;
//
//inline void add(int u, int v, int id) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	eid[cnt] = id;
//	head[u] = cnt++;
//}
//
//int n, m, k;
//vector<pair<int, int>>option; //存候选边
//bool use[MAXN];		//标记使用的侯选边
//int odd[MAXN];		//1--点u度数是奇数
//int deg[MAXN];		
//int diff[MAXN];		//异或差分数组
//int counts[MAXN];	//连通块i内，原图的奇点数量
//
//
//void dfs(int u, int fu, int uid) {
//	//uid是u---fu的侯选边编号
//	
//	//当前点是否是奇点
//	//在u的子树内部，剩余未抵消的翻转需求
//	diff[u] = odd[u];
//	
//	for (int i = head[u]; i; i = nxt[i]) {
//		int v = to[i];
//		int id = eid[i];
//		
//		if (v == fu)
//			continue;
//
//		dfs(v, u, id);
//
//		diff[u] ^= diff[v];
//	}
//
//	if (uid != -1 && diff[u])
//		use[uid] = 1;
//}
//
//void solve() {
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; ++i)
//		fa[i] = i;
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		deg[u]++;
//		deg[v]++;
//	}
//
//	for (int i = 1; i <= n; ++i)
//		odd[i] = deg[i] & 1;
//
//	memset(head, 0, sizeof(head));
//	cnt = 1;
//
//	option.resize(k + 1);
//
//	//合并侯选边连通块
//	for (int i = 1; i <= k; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		option[i] = { u,v }; 
//
//		int fu = find(u);
//		int fv = find(v);
//
//		if (fu != fv) {
//			unite(u, v);
//			add(u, v, i);
//			add(v, u, i);
//		}
//	}
//
//	//记录每个连通块内部的奇点个数
//	memset(counts, 0, sizeof(counts));
//	for (int i = 1; i <= n; ++i) {
//		if (odd[i]) {
//			int f = find(i);
//			counts[f]++;
//		}
//	}
//
//	//如果有一个连通块奇点个数为奇数，那么失败
//	bool ok = true;
//	for (int i = 1; i <= n; ++i) {
//		if (find(i) == i) { 
//			if (counts[i] % 2 != 0) {
//				ok = false;
//				break;
//			}
//		}
//	}
//
//	if (!ok) {
//		cout << "NO\n";
//		return;
//	}
//
//	//每个连通块都求一遍dfs，选取需要的边
//	for (int i = 1; i <= n; ++i) {
//		if (find(i) == i)
//			dfs(i, -1, -1);
//	}
//
//	vector<pair<int, int>>ans;
//	for (int i = 1; i <= k; ++i) {
//		if (use[i])
//			ans.push_back(option[i]);
//	}
//
//	cout << "YES\n";
//	cout << ans.size() << "\n";
//	for (auto& p : ans)
//		cout << p.first << " " << p.second << "\n";
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
