////
//////https://codeforces.com/gym/103577/problem/L
////
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cstring> 
////#include<queue>
////#include<unordered_map>
////#include<climits>
////
////using namespace std;
////
////typedef long long ll;
////
////const int MAXN = 1e5 + 10;
////const int MAXM = 2e5 + 10;
////const int MAX = 1e6 + 10;
////
////int head[MAXN], to[MAXM], nxt[MAXM];
////int cnt = 1;
////
////inline void add(int u, int v) {
////	to[cnt] = v;
////	nxt[cnt] = head[u];
////	head[u] = cnt++;
////}
////
////ll weight[MAXN];
////ll ans = 0;
////int n, q;
////vector<int>num;
////
////bool f = 0;
////
////void dfs(int u, int fa) {
////	ll mx = 0;;
////
////	if (f)
////		return;
////
////	for (int i = head[u]; i; i = nxt[i]) {
////		int v = to[i];
////
////		if (v != fa) {
////			dfs(v, u);
////			
////			mx = max(mx, weight[v]);
////		}
////	}
////
////	if (mx <= weight[u])
////		return;
////
////	ll diff = mx - weight[u];
////	auto it = lower_bound(num.begin(), num.end(), diff);
////
////	if (it == num.end()) {
////		f = 1;
////		return;
////	}
////
////	weight[u] += *it;
////}
////
////void solve() {
////	cin >> n >> q;
////
////	for (int i = 1; i <= n; ++i)
////		cin >> weight[i];
////
////	for (int i = 1; i < n; ++i) {
////		int u, v;
////		cin >> u >> v;
////
////		add(u, v);
////		add(v, u);
////	}
////
////	vector<int>x(q + 1, 0);
////	for (int i = 1; i <= q; ++i)
////		cin >> x[i];
////
////	sort(x.begin() + 1, x.end());
////
////	vector<bool>dp(MAX, 0);
////	dp[0] = 1;
////
////	for (int i = 1; i <= q; ++i) {
////
////		for (int j = MAX - 1; j >= x[i]; --j) {
////			if (dp[j - x[i]])
////				dp[j] = 1;
////		}
////	}
////
////	for (int i = 0; i < MAX; ++i)
////		if (dp[i])
////			num.push_back(i);
////
////
////	dfs(1, 0);
////
////	if (f) {
////		cout << "-1\n";
////		return;
////	}
////
////	for (int i = 1; i <= n; ++i)
////		ans += weight[i];
////
////	cout << ans << "\n";
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	solve();
////
////	return 0;
////}
//
//
////https://codeforces.com/gym/103577/problem/L
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
//typedef long long ll;
//
//const int MAXN = 1e5 + 10;
//const int MAXM = 2e5 + 10;
//const int MAX = 1e6 + 10;
//
//int head[MAXN], to[MAXM], nxt[MAXM];
//int cnt = 1;
//
//inline void add(int u, int v) {
//	to[cnt] = v;
//	nxt[cnt] = head[u];
//	head[u] = cnt++;
//}
//
//ll weight[MAXN];
//ll ans = 0;
//int n, q;
//vector<int>num;
//
//bool f = 0;
//
//void dfs(int u, int fa) {
//	ll mx = 0;;
//
//	if (f)
//		return;
//
//	for (int i = head[u]; i; i = nxt[i]) {
//		int v = to[i];
//
//		if (v != fa) {
//			dfs(v, u);
//
//			if (f) 
//				return;
//
//			mx = max(mx, weight[v]);
//		}
//	}
//
//	if (mx <= weight[u])
//		return;
//
//	ll diff = mx - weight[u];
//	auto it = lower_bound(num.begin(), num.end(), diff);
//
//	if (it == num.end()) {
//		f = 1;
//		return;
//	}
//
//	weight[u] += *it;
//}
//
//void solve() {
//	cin >> n >> q;
//
//	for (int i = 1; i <= n; ++i)
//		cin >> weight[i];
//
//	for (int i = 1; i < n; ++i) {
//		int u, v;
//		cin >> u >> v;
//
//		add(u, v);
//		add(v, u);
//	}
//
//	ll sum = 0;
//	vector<int>x(q + 1, 0);
//	for (int i = 1; i <= q; ++i) {
//		cin >> x[i];
//		sum += x[i];
//	}
//
//	sort(x.begin() + 1, x.end());
//
//	//dp[k] = 1：和 k 可以凑出来
//	bitset<MAX>dp;
//	dp[0] = 1;
//
//	//对已经有的每个数增加i位 然后再加入i
//	for (int i : x)
//		dp |= (dp << i);
//
//	int limit = min(1LL * MAX - 1, sum);
//
//	for (int i = 0; i <= limit; ++i)
//		if (dp[i])
//			num.push_back(i);
//
//
//	dfs(1, 0);
//
//	if (f) {
//		cout << "-1\n";
//		return;
//	}
//
//	for (int i = 1; i <= n; ++i)
//		ans += weight[i];
//
//	cout << ans << "\n";
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