////
////
////
//////https://acm.hdu.edu.cn/showproblem.php?pid=3191
////
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cstring> 
////#include<unordered_map>
////#include<queue>
////
////using namespace std;
////
////const int MAXN = 55;
////const int MAXM = 5050;
////const int INF = 1e9;
////
////int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
////int cnt;
////
////inline void add(int u, int v, int w) {
////	to[cnt] = v;
////	nxt[cnt] = head[u];
////	weight[cnt] = w;
////	head[u] = cnt++;
////}
////
////int n, m;
////int s, e;
////
////void solve() {
////
////	while (cin >> n >> m >> s >> e) {
////		cnt = 1;
////		memset(head, 0, sizeof(head));
////
////		vector<vector<pair<int, int>>>dist(n + 1, vector<pair<int, int>>(2, { INF,0 }));
////
////		for (int i = 1; i <= m; ++i) {
////			int u, v, w;
////			cin >> u >> v >> w;
////			add(u, v, w);
////		}
////
////		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
////		q.push({ 0,s });
////		dist[s][0] = { 0,1 };
////
////		while (!q.empty()) {
////			auto it = q.top();
////			q.pop();
////
////			int uw = it.first;
////			int u = it.second;
////
////			int cu;
////
////			if (uw == dist[u][0].first)
////				cu = dist[u][0].second;
////			else if (uw == dist[u][1].first)
////				cu = dist[u][1].second;
////			else
////				continue;
////
////			for (int i = head[u]; i; i = nxt[i]) {
////				int v = to[i];
////				int vw = weight[i];
////
////				int nd = uw + vw;
////
////				if (dist[v][0].first == nd)
////					dist[v][0].second += cu;
////				else if (dist[v][1].first == nd)
////					dist[v][1].second += cu;
////				else if (dist[v][0].first > nd) {
////					dist[v][1] = dist[v][0];
////
////					dist[v][0].first = nd;
////					dist[v][0].second = cu;
////
////					q.push({ nd,v });
////
////					if (dist[v][1].first != INF) 
////						q.push({ dist[v][1].first, v });
////					
////				}
////				else if (dist[v][1].first > nd) {
////					dist[v][1].first = nd;
////					dist[v][1].second = cu;
////					q.push({ nd, v });
////				}
////			}
////		}
////
////		cout << dist[e][1].first << " " << dist[e][1].second << "\n";
////	}
////	
////
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////
////	solve();
////
////	return 0;
////}
////
//
//
//
//
//
////https://acm.hdu.edu.cn/showproblem.php?pid=3191
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<unordered_map>
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 55;
//const int MAXM = 5050;
//const int INF = 1e9;
//
//int head[MAXN], to[MAXM], nxt[MAXM], weight[MAXM];
//int cnt;
//
//inline void add(int u, int v, int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//}
//
//int n, m;
//int s, e;
//
//void solve() {
//
//	while (cin >> n >> m >> s >> e) {
//		cnt = 1;
//		memset(head, 0, sizeof(head));
//
//		vector<int>deg(n + 1, 0);
//
//		for (int i = 1; i <= m; ++i) {
//			int u, v, w;
//			cin >> u >> v >> w;
//			add(u, v, w);
//			deg[v]++;
//		}
//
//		queue<int>q;
//		for (int i = 0; i < n; ++i) {
//			if (deg[i] == 0)
//				q.push(i);
//		}
//
//		vector<int>topo;
//		while (!q.empty()) {
//			int u = q.front();
//			q.pop();
//
//			topo.push_back(u);
//
//			for (int i = head[u]; i; i = nxt[i]) {
//				int v = to[i];
//
//				if (--deg[v] == 0)
//					q.push(v);
//			}
//		}
//
//		vector<pair<int, ll>>dist0(n + 1, { INF,0 });
//		vector<pair<int, ll>>dist1(n + 1, { INF,0 });
//
//		dist0[s] = { 0,1 };
//
//		auto relax = [&](int v, int d, ll c) {
//			if (c == 0)
//				return;
//
//			if (d == dist0[v].first)
//				dist0[v].second += c;
//			else if (d < dist0[v].first) {
//				dist1[v] = dist0[v];
//				dist0[v] = { d,c };
//			}
//			else if (d == dist1[v].first)
//				dist1[v].second += c;
//			else if (d < dist1[v].first)
//				dist1[v] = { d,c };
//		};
//
//	
//		for (int u : topo) {
//			if (dist0[u].first == INF && dist1[u].first == INF)
//				continue;
//
//			for (int i = head[u]; i; i = nxt[i]) {
//				int v = to[i];
//				int w = weight[i];
//
//				// 利用 u 的最短路去放松 v
//				if (dist0[u].first != INF) 
//					relax(v, dist0[u].first + w, dist0[u].second);
//				
//				// 利用 u 的次短路去放松 v
//				if (dist1[u].first != INF) 
//					relax(v, dist1[u].first + w, dist1[u].second);
//				
//			}
//		}
//
//		cout << dist1[e].first << " " << dist1[e].second << "\n";
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	solve();
//
//	return 0;
//}
//
//
