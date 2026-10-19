//
//
////http://poj.org/problem?id=2485
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e4 + 10;
//
//struct Edge {
//	int u, v, w;
//
//	bool operator<(const Edge& o)const {
//		return w < o.w;
//	}
//};
//
//int fa[510];
//
//int find(int x) {
//	if (fa[x] != x)
//		fa[x] = find(fa[x]);
//
//	return fa[x];
//}
//
//void solve() {
//
//	int n;
//	vector<Edge>e;
//
//	cin >> n;
//	
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			int u, v, w;
//			cin >>w;
//
//			if (i < j)
//				e.push_back({ i, j, w });
//		}
//	}
//
//	sort(e.begin(), e.end());
//	int ans = 0;
//	int cnt = 0;
//
//	for (int i = 1; i <= n; ++i)
//		fa[i] = i;
//
//	for (int i = 0; i < e.size(); ++i) {
//		int u = e[i].u;
//		int v = e[i].v;
//		int w = e[i].w;
//
//		int fu = find(u);
//		int fv = find(v);
//
//		if (fu != fv) {
//			fa[fu] = fv;
//			ans = max(ans, w);
//			++cnt;
//		}
//
//		if (cnt == n - 1)
//			break;
//	}
//
//	cout << ans << "\n";
//
//}
//
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
//	return 0;
//}