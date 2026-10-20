//
//
////http://poj.org/problem?id=1094
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//
//const int MAXN = 30;
//const int MAXM = 1005;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt;
//
//int n, m;
//vector<int>ans;
//bool has[MAXN][MAXN];
//
//void init(int n) {
//	cnt = 1;
//	memset(head, 0, sizeof(int) * (n + 1));
//	memset(has, 0, sizeof(has));
//}
//
//
//inline void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//int bfs(const vector<int>& deg) {
//	ans.clear();
//	queue<int>q;
//
//	vector<int>cur = deg;
//
//	for (int i = 1; i <= n; ++i)
//		if (cur[i] == 0)
//			q.push(i);
//
//	bool f = 0;
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		ans.push_back(u);
//
//		if (!q.empty())
//			f = 1;
//
//		for (int i = head[u]; i; i = nxt[i]) {
//			int v = to[i];
//			if (--cur[v] == 0)
//				q.push(v);
//		}
//	}
//
//	if (ans.size() != n)
//		return 2;
//
//	if (f)
//		return 3;
//
//	return 1;
//}
//
//void solve() {
//	while (cin >> n >> m) {
//
//		if (n == 0 && m == 0)
//			return;
//
//		vector<int>deg(n + 1, 0);
//		string s;
//		bool stop = 0;
//		init(n);
//
//		for (int i = 1; i <= m; ++i) {
//			cin >> s;
//			int u = s[0] - 'A' + 1;
//			int v = s[2] - 'A' + 1;
//
//			if (stop)
//				continue;
//
//			if (has[v][u]) {
//				cout << "Inconsistency found after " << i << " relations.\n";
//				stop = 1;
//				continue;
//			}
//
//			if (!has[u][v]) {
//				deg[v]++;
//				has[u][v] = 1;
//				add(u, v);
//			}
//			
//			int flag = bfs(deg);
//
//			if (flag == 1) {
//				stop = 1;
//
//				cout << "Sorted sequence determined after " << i << " relations: ";
//				for (int node : ans)
//					cout << (char)(node + 'A' - 1);
//				cout << ".\n";
//			}
//			else if (flag == 2) {
//				stop = 1;
//				cout << "Inconsistency found after " << i << " relations.\n";
//			}
//
//
//			
//		}
//
//
//		if (!stop) 
//			cout << "Sorted sequence cannot be determined.\n";
//		
//	}
//}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}
