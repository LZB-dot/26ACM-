//
//
////https://www.luogu.com.cn/problem/P1341
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cctype>
//#include<cstring>
//
//using namespace std;
//
//const int MAXN = 1e5 + 10;
//const int MAXM = 2e5 + 10;
//
//int head[MAXN], to[MAXN], nxt[MAXN], eid[MAXN];
//int cnt = 1;
//
//inline void add(int u, int v, int id) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	eid[cnt] = id;
//	head[u] = cnt++;
//}
//
//struct Edge {
//	int u, v, id;
//};
//
//bool cmp(Edge a, Edge b) {
//	if (a.u == b.u)
//		return a.v < b.v;
//	return a.u < b.u;
//}
//
//Edge e[MAXM];
//int n, k;
//int deg[105];
//
//void connect() {
//	sort(e + 1, e + k + 1, cmp);
//
//	for (int i = 1; i <= k;) {
//
//		int j = i + 1;
//		while (j <= k && e[i].u == e[j].u)
//			++j;
//
//		for (int t = j - 1; t >= i; --t) {
//			add(e[t].u, e[t].v, e[t].id);
//			deg[e[t].u]++;
//		}
//
//		i = j;
//	}
//}
//
//int direct() {
//
//	int odd = 0;
//	int p1 = -1, p2 = -1;
//
//	for (int i = 1; i < 100; ++i) {
//		if (deg[i] & 1){
//			++odd;
//			if (p1 == -1)
//				p1 = i;
//			else
//				p2 = i;
//		}
//	}
//
//	if (odd != 0 && odd != 2)
//		return -1;
//
//
//	if (odd == 0){
//		for (int i = 1; i < 100; ++i) {
//			if (deg[i] > 0)
//				return i;
//		}
//	}
//	else
//		return min(p1, p2);
//	
//	return -1;
//}
//
//int st[MAXM];
//int top;
//
//int path[MAXM], cur[MAXM];
//bool vis[MAXM];
//int cntp;
//
//void euler(int start) {
//	top = 0;
//	st[top++] = start;
//
//	cntp = 0;
//
//	memcpy(cur, head, sizeof(head));
//
//	while (top != 0) {
//		int u = st[top - 1];
//
//		if (cur[u] > 0) {
//			int ei = cur[u];
//			cur[u] = nxt[ei];
//
//			int id = eid[ei];
//			if (!vis[id]) {
//				vis[id] = 1;
//				st[top++] = to[ei];
//			}
//		}
//		else {
//			--top;
//			path[++cntp] = u;
//		}
//	}
//}
//void solve() {
//
//	cin >> n;
//
//	k = 0;
//
//	memset(head, 0, sizeof(head));
//	memset(deg, 0, sizeof(deg));
//	memset(vis, 0, sizeof(vis));
//
//	cnt = 1;
//
//	for (int i = 1; i <= n; ++i) {
//		string s;
//		cin >> s;
//
//		int u, v;
//		if (islower(s[0]))
//			u = s[0] - 'a' + 27;
//		else
//			u = s[0] - 'A' + 1;
//
//		if (islower(s[1]))
//			v = s[1] - 'a' + 27;
//		else
//			v = s[1] - 'A' + 1;
//
//		e[++k] = { u,v,i };
//		e[++k] = { v,u,i };
//	}
//
//	connect();
//
//	int start = direct();
//
//	if (start == -1){
//		cout << "No Solution\n";
//		return;
//	}
//
//	euler(start);
//
//	if (cntp != n + 1)
//		cout << "No Solution\n";
//	else {
//		for (int i = cntp; i >= 1; i--){
//
//			int num = path[i];
//			char c;
//
//			if (num <= 26)
//				c = 'A' + num - 1;
//			else
//				c = 'a' + num - 27;
//
//			cout << c;
//		}
//		cout << '\n';
//	}
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
