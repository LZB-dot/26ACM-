//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//#define pii pair<int,int>
//
//typedef long long ll;
//
//const int MAXN = 1010;
//const int MAXM = 2020;
//const ll INF = 1e18;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt = 1;
//
//inline void add(int u, int v,int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//int n, m, e;
//
//ll dist[MAXN][MAXN];
//
//void solve() {
//	cin >> n >> m >> e;
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//
//		add(u, v, w);
//		add(v, u, w);
//	}
//
//	//if (1 == e) {
//	//	cout << "0\n";
//	//	return;
//	//}
//
//	for (int i = 0; i <= n; ++i)
//		for (int j = 0; j <= n; ++j)
//			dist[i][j] = INF;
//
//	priority_queue<vector<ll>, vector<vector<ll>>, greater<vector<ll>>>pq;
//	pq.push({ 0,1,0 });
//	dist[1][0] = 0;
//
//	while (!pq.empty()) {
//		auto it = pq.top();
//		pq.pop();
//
//		ll uw = it[0];
//		int u = it[1];
//		int d = it[2];
//
//		if (uw > dist[u][d])
//			continue;
//
//		if (d >= n)
//			continue;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			int vw = weight[i];
//
//			int nd = d;
//			if (vw != 0)
//				++nd;
//
//			if (nd >= n)
//				continue;
//
//			ll cur =  1LL * d * vw;
//
//			if (dist[v][nd] > dist[u][d] + cur) {
//				dist[v][nd] = dist[u][d] + cur;
//				pq.push({ dist[v][nd],v,nd });
//			}
//		}
//	}
//
//	ll ans = INF;
//	for (int i = 0; i < n ; ++i)
//		ans = min(ans, dist[e][i]);
//
//	if (ans == INF)
//		cout << "-1\n";
//	else
//		cout << ans << "\n";
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