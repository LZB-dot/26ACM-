//
////https://codeforces.com/gym/106785/problem/F
//
////https://codeforces.com/gym/106785/problem/I
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
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//const int MAXM = 4e5 + 10;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int weight[MAXM];
//int cnt;
//
//int dist[MAXN];
//int pre[MAXN];
//
//void init(int n) {
//	cnt = 1;
//
//	memset(head, 0, sizeof(int) * (n + 1));
//	memset(dist, 0, sizeof(int) * (n + 1));
//	memset(pre, 0, sizeof(int) * (n + 1));
//}
//
//inline void add(int u, int v,int w) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	weight[cnt] = w;
//	head[u] = cnt++;
//
//}
//
//void bfs(int start, int n) {
//	for (int i = 1; i <= n; ++i)
//		dist[i] = -1;
//
//	queue<int>q;
//	q.push(start);
//
//	dist[start] = 0;
//	pre[start] = 0;
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			
//			if (dist[v] == -1) {
//				dist[v] = dist[u] + weight[i];
//				pre[v] = u;
//				q.push(v);
//			}
//		}
//	}
//}
//
//void dfs(int u, int fa, int w) {
//	pre[u] = fa;
//	dist[u] = dist[fa] + w;
//
//	for (int i = head[u]; i; i = nxt[i]) {
//		int v = to[i];
//		int vw = weight[i];
//
//		if (v != fa) 
//			dfs(v, u, vw);
//	}
//}
//
//void solve() {
//	int n, k;
//	cin >> n >> k;
//
//	init(n);
//
//	for (int i = 1; i <= n - 1; ++i) {
//		int u, v;
//		cin >> u >> v ;
//		add(u, v, 1);
//		add(v, u, 1);
//	}
//
//	//dfs(1, 0, 0);
//	bfs(1, n);
//
//	int tmp = -1;
//	int l = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		if (tmp < dist[i]) {
//			tmp = dist[i];
//			l = i;
//		}
//	}
//
//	//dfs(l, 0, 0);
//	bfs(l, n);
//	tmp = -1;
//	int r = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		if (tmp < dist[i]) {
//			tmp = dist[i];
//			r = i;
//		}
//	}
//
//	int d = dist[r];
//	vector<int>path;
//
//	int cur = r;
//	while (cur != 0) {
//		path.push_back(cur);
//		cur = pre[cur];
//	}
//	reverse(path.begin(), path.end());
//
//	if (d % 2 == 1) {
//		cout << "Alice\n";
//		return;
//	}
//
//	int mid = path[d / 2];
//
//	if (mid == k)
//		cout << "Bob\n";
//	else
//		cout << "Alice\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	while(T--)
//		solve();
//
//	return 0;
//}