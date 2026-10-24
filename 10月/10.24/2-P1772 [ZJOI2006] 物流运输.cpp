//
////https://www.luogu.com.cn/problem/P1772
//
//
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
//#define pll pair<ll,ll>
//typedef long long ll;
//
//const ll MAXN = 22;
//const ll MAXM = 410;
//const ll MAXT = 110;
//const ll INF = 1e9;
//
//ll head[MAXN], to[MAXM], nxt[MAXM];
//ll weight[MAXM];
//ll cnt;
//
//ll n, m, k, e, d;
//
//ll cost[MAXT][MAXT];//l-r固定一条合法的最短路径
//bool ban[MAXT][MAXN];//第i天 码头j是否被禁用
//ll dp[MAXT];//完成前i天运输任务所需的最小总成本
//
//inline void add(ll u, ll v, ll w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//ll dijkstra(ll l, ll r) {
//	priority_queue<pll, vector<pll>, greater<pll>>pq;
//
//	vector<ll>dist(m + 1, INF);
//	vector<bool>vis(m + 1, false);
//
//	dist[1] = 0;
//	pq.push({ 0, 1 });
//
//
//	while (!pq.empty()) {
//		auto it = pq.top();
//		pq.pop();
//
//		ll w = it.first;
//		ll u = it.second;
//
//		if (vis[u])
//			continue;
//
//		vis[u] = 1;
//
//		for (ll i = head[u]; i; i = nxt[i]) {
//			ll v = to[i];
//			ll vw = weight[i];
//
//			bool f = 1;
//
//			for (ll j = l; j <= r; ++j) {
//				if (ban[j][v]) {
//					f = false;
//					break;
//				}
//			}
//
//			if (f && dist[v] > dist[u] + vw) {
//				dist[v] = dist[u] + vw;
//				pq.push({ dist[v],v });
//			}
//
//		}
//	}
//
//	return dist[m];
//}
//
//void solve() {
//	cin >> n >> m >> k >> e;
//
//	cnt = 1;
//	memset(head, 0, sizeof(head));
//	memset(ban, 0, sizeof(ban));
//
//	for (ll i = 1; i <= e; ++i) {
//		ll u, v, w;
//		cin >> u >> v >> w;
//		add(u, v, w);
//		add(v, u, w);
//	}
//
//	cin >> d;
//
//	for (ll i = 1; i <= d; ++i) {
//		ll u, a, b;
//		cin >> u >> a >> b;
//
//		for (ll j = a; j <= b; ++j)
//			ban[j][u] = 1;
//	}
//
//	for (ll i = 1; i <= n; ++i)
//		for (ll j = i; j <= n; ++j)
//			cost[i][j] = dijkstra(i, j);
//
//
//	dp[0] = 0;
//
//	for (ll i = 1; i <= n; ++i) {
//		dp[i] = INF;
//
//		//枚举上一次更换路线是在第j天结束时
//		for (ll j = 0; j < i; ++j) {
//			//[j+1, i] 这段时间可达
//			//且前 j 天方案有效
//			if (cost[j + 1][i] < INF && dp[j] < INF) {
//				ll cur = dp[j] + cost[j + 1][i] * (i - j);
//
//				if (j != 0)
//					cur += k;
//
//				dp[i] = min(dp[i], cur);
//
//			}
//		}
//	}
//
//	cout << dp[n] << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	//ll T;
//	//cin >> T;
//
//	//while (T--)
//		solve();
//
//	return 0;
//}