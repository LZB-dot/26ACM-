//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//
//int head[MAXN], to[MAXN << 1], nxt[MAXN << 1];
//int cnt;
//int ans;
//string s;
//
//void init(int n) {
//	memset(head, 0, sizeof(int) * (n + 1));
//	cnt = 1;
//	ans = 0;
//}
//
//void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	cin >> s;
//	s = " " + s;
//
//	init(n);
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v;
//		cin >> u >> v;
//		add(u, v);
//		add(v, u);
//	}
//
//	vector<int>open;
//	for (int i = 1; i <= n; ++i) {
//		int w = 0;
//		for (int j = head[i]; j; j = nxt[j])
//			w += (s[to[j]] == '1' ? -1 : 1);
//
//		if (w > 0)
//			open.push_back(i);
//
//	}
//
//	cout << open.size() << "\n";
//	for (int i : open)
//		cout << i << " ";
//	cout << "\n";
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//
//	return 0;
//}