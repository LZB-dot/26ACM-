//
//
////https://www.luogu.com.cn/problem/P3953
//
//
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
//#define pli pair<ll,int>
//typedef long long ll;
//
//const int MAXN = 1e5 + 10;
//const int MAXM = 2e5 + 10;
//const ll INF = 1e18;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//ll weight[MAXM];
//int cnt;
//
//int rhead[MAXN], rto[MAXM], rnxt[MAXM];
//ll rweight[MAXM];
//int rcnt;
//
//int n, m, k, p;
//
//ll rdist[MAXN];
//bool vis[MAXN];
//vector<vector<int>>dp;
//vector<vector<bool>>in;
//bool has0;
//
//void init(int n) {
//	cnt = 1;
//	rcnt = 1;
//
//	for (int i = 0; i <= n; ++i) {
//		head[i] = 0;
//		rhead[i] = 0;
//		rdist[i] = INF;
//		vis[i] = false;
//	}
//
//	dp.assign(n + 1, vector<int>(k + 1, -1));
//	in.assign(n + 1, vector<bool>(k + 1, false));
//	has0 = false;
//}
//
//inline void add(int u, int v, ll w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//inline void radd(int u, int v, ll w) {
//	rto[rcnt] = v;
//	rnxt[rcnt] = rhead[u];
//	rweight[rcnt] = w;
//	rhead[u] = rcnt++;
//}
//
//
//void dijkstra() {
//	priority_queue<pli, vector<pli>, greater<pli>>pq;
//	pq.push({ 0,n });
//
//	rdist[n] = 0;
//
//	while (!pq.empty()) {
//		auto it = pq.top();
//		pq.pop();
//
//		ll w = it.first;
//		int u = it.second;
//
//		if (vis[u])
//			continue;
//
//		vis[u] = 1;
//
//		for (int i = rhead[u]; i; i = rnxt[i]) {
//			int v = rto[i];
//			ll vw = rweight[i];
//
//			if (rdist[v] > rdist[u] + vw) {
//				rdist[v] = rdist[u] + vw;
//				pq.push({ rdist[v],v });
//			}
//		}
//	}
//}
//
//
//int dfs(int u, int remain) {
//	if (remain < 0)
//		return 0;
//
//	if (in[u][remain]) {
//		has0 = true;
//		return 0;
//	}
//
//	if (dp[u][remain] != -1)
//		return dp[u][remain];
//
//	in[u][remain] = true;
//
//
//	ll ans = (u == n ? 1 : 0);
//
//	for (int i = head[u]; i; i = nxt[i]) {
//		int v = to[i];
//		ll w = weight[i];
//
//		if (rdist[v] == INF)
//			continue;
//
//		ll diff = rdist[v] + w - rdist[u];
//
//		if (remain >= diff) {
//			ans = (ans + dfs(v, remain - diff)) % p;
//		}
//	}
//
//	in[u][remain] = false;
//
//	return dp[u][remain] = ans;
//}
//
//void solve() {
//	cin >> n >> m >> k >> p;
//
//	init(n);
//
//	for (int i = 1; i <= m; ++i) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		add(u, v, w);
//		radd(v, u, w);
//	}
//
//	dijkstra();
//
//	if (rdist[1] == INF) {
//		cout << "0\n";
//		return;
//	}
//
//	ll ans = dfs(1, k);
//
//	if (has0)
//		cout << "-1\n";
//	else
//		cout << ans << '\n';
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
//	return 0;
//}