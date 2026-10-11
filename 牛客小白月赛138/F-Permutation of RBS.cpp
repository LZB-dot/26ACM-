//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//const int MAXN = 5e5 + 10;
//
//ll fac[MAXN];
//ll inv[MAXN];
//
//ll qpow(ll a, ll b) {
//	ll res = 1;
//	while (b) {
//		if (b & 1)
//			res = res * a % MOD;
//		a = a * a % MOD;
//		b >>= 1;
//	}
//	return res;
//}
//
//void pre() {
//	fac[0] = 1;
//	for (int i = 1; i < MAXN; ++i)
//		fac[i] = fac[i - 1] * i % MOD;
//
//	inv[MAXN - 1] = qpow(fac[MAXN - 1], MOD - 2);
//
//	for (int i = MAXN - 2; i >= 0; --i)
//		inv[i] = inv[i + 1] * (i + 1) % MOD;
//}
//
//ll C(int n, int k) {
//	if (k < 0 || k > n)
//		return 0;
//
//	return fac[n] * inv[k] % MOD * inv[n - k] % MOD;
//}
//
//struct Node {
//	int l, r;
//	int sz;
//	vector<int>son;
//};
//vector<Node>nodes;
//
//ll dfs(int u) {
//	ll res = 1;
//	int rem = (u == 0) ? nodes[u].sz : nodes[u].sz - 1;
//
//	for (int v : nodes[u].son) {
//		ll tmp = C(rem, nodes[v].sz);
//		res = res * tmp % MOD;
//		res = res * dfs(v) % MOD;
//		rem -= nodes[v].sz;
//	}
//	return res;
//}
//
//void solve() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//	int len = s.size();
//	vector<int>match(len);
//
//	//将同一个括号对应起来
//	int st[MAXN];
//	int top = 0;
//	for (int i = 0; i < len; ++i) {
//		if (s[i] == '(')
//			st[top++] = i;
//		else {
//			int l = st[top - 1];
//			--top;
//			match[l] = i;
//			match[i] = l;
//		}
//	}
//
//	//为每个括号赋予编号 然后计入节点数组
//	vector<int>id(len, -1);
//	vector<bool>vis(len, false);
//
//	nodes.clear();
//	nodes.push_back({ -1, -1, n, {} });
//
//	for (int i = 0; i < len; ++i) {
//		if (s[i] == '(' && !vis[i]) {
//			int R = match[i];
//			int sz = (R - i + 1) / 2;
//			id[i] = nodes.size();
//			nodes.push_back({ i,R,sz,{} });
//			vis[i] = vis[R] = true;
//		}
//	}
//
//	//将每个括号节点进行建树
//	top = 0;
//	st[top++] = 0;
//
//	for (int i = 0; i < len; ++i) {
//		if (s[i] == '(') {
//			int u = id[i];
//			int fa = st[top - 1];
//			nodes[fa].son.push_back(u);
//
//
//			st[top++] = u;
//		}
//		else if (s[i] == ')') {
//			if (id[match[i]] != -1)
//				top--;
//		}
//	}
//
//	ll ans = dfs(0);
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	pre();
//
//	int T;
//	cin >> T;
//	while (T--)
//		solve();
//
//	return 0;
//}