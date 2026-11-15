//#include<iostream>
//#include<vector>
//#include<unordered_set>
//
//using namespace std;
//
//const int MAXN = 2e5 + 10;
//
//int deg[MAXN];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	if (n == 1) {
//		cout << "1\n";
//		return 0;
//	}
//
//	vector<int>color(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> color[i];
//
//	for (int i = 1; i < n; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		deg[u]++;
//		deg[v]++;
//
//	}
//
//	unordered_set<int>st;
//
//	for (int i = 1; i <= n; ++i)
//		if (deg[i] == 1)
//			st.insert(color[i]);
//
//	cout << st.size() << "\n";
//
//	return 0;
//}