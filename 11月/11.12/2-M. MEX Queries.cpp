////
//////https://codeforces.com/gym/106608/problem/M
////
//// //my
//// //修改1：树状数组减少查询次数
////
//// //ai
//// //修改1：本质上2*n*logn，大于查询次数，
//// //		因为我的递归实际每轮需要两次查询，二分的话查询一边即可
//// //		改为对于未确定的位置进行二分优化
//// 
//// 
//// 
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cstring> 
////#include<queue>
////#include<unordered_map>
////#include<climits>
////#include<bitset>
////#include<cstdlib>
////#include<ctime>
////
////using namespace std;
////
////typedef long long ll;
////
////const int MAXN = 410;
////
////int tree[MAXN];
////int n;
////
////inline int lowbit(int i) {
////	return i & -i;
////}
////
////inline void add(int u, int v) {
////	while (u <= n) {
////		tree[u] += v;
////		u += lowbit(u);
////	}
////}
////
////inline int query(int u) {
////	int ans = 0;
////	while (u >= 1) {
////		ans += tree[u];
////		u -= lowbit(u);
////	}
////
////	return ans;
////}
////
////vector<int>Q;
////vector<int>a;
////
////bool check(int l, int r, int x) {
////	vector<int>P;
////
////	for (int i = l; i <= r; ++i)
////		P.push_back(i);
////
////	cout << "? " << P.size() << " " << Q.size() << "\n";
////	cout.flush();
////
////	for (int i : P)
////		cout << i << " ";
////	cout << "\n";
////	cout.flush();
////
////	for (int i : Q)
////		cout << i << " ";
////	cout << "\n";
////	cout.flush();
////
////	int mex;
////	cin >> mex;
////
////	if (mex == x)
////		return false;
////
////	return true;
////}
////
////void dfs(int i, int l, int r) {
////
////	if ((query(r) - query(l - 1)) == (r - l + 1))
////		return;
////
////	bool f = check(l, r, i);
////
////	if (!f)
////		return;
////
////	if (l == r) {
////		a[l] = i;
////		add(l, 1);
////	}
////	else {
////		int mid = l + (r - l >> 1);
////		dfs(i, l, mid);
////		dfs(i, mid + 1, r);
////	}
////}
////
////void solve() {
////	cin >> n;
////	a.resize(n + 1, 0);
////	Q.clear();
////	memset(tree, 0, sizeof(int) * (n + 1));
////
////	for (int i = 0; i <= n; ++i) {
////		dfs(i, 1, n);
////		Q.push_back(i);
////	}
////		
////	cout << "! ";
////	for (int i = 1; i <= n; ++i)
////		cout << a[i] << " ";
////	cout << "\n";
////	cout.flush();
////
////	return;
////}
////
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	int T;
////	cin >> T;
////
////	while(T--)
////		solve();
////
////	return 0;
////}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//#include<cstdlib>
//#include<ctime>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 410;
//
//int n;
//
//vector<int>Q;
//vector<int>a;
//vector<int>tmp;
//
//bool check(int l, int r, int x) {
//	vector<int>P;
//
//	for (int i = l; i <= r; ++i) 
//		P.push_back(tmp[i]);
//
//	cout << "? " << P.size() << " " << Q.size() << "\n";
//	cout.flush();
//
//	for (int i : P)
//		cout << i << " ";
//	cout << "\n";
//	cout.flush();
//
//	for (int i : Q)
//		cout << i << " ";
//	cout << "\n";
//	cout.flush();
//
//	int mex;
//	cin >> mex;
//
//	if (mex == x)
//		return false;
//
//	return true;
//}
//
//void dfs(int i, int l, int r) {
//
//	while (l < r) {
//		int mid = l + (r - l) / 2;
//
//		if (check(l, mid, i))
//			r = mid;
//		else
//			l = mid + 1;
//	}
//
//	a[tmp[l]] = i;
//}
//
//void solve() {
//	cin >> n;
//	a.assign(n + 1, -1);
//	Q.clear();
//
//	for (int i = 0; i <= n; ++i) {
//		
//		while (1) {
//			tmp.clear();
//
//			for (int j = 1; j <= n; ++j)
//				if (a[j] == -1)
//					tmp.push_back(j);
//
//			if (tmp.empty())
//				break;
//
//			if (!check(0, tmp.size() - 1, i))
//				break;
//			
//			dfs(i, 0, tmp.size() - 1);
//		}
//
//		Q.push_back(i);
//
//	}
//
//	cout << "! ";
//	for (int i = 1; i <= n; ++i)
//		cout << a[i] << " ";
//	cout << "\n";
//	cout.flush();
//
//	return;
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