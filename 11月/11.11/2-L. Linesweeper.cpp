//
////https://codeforces.com/gym/106611/problem/L
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
//#include<cstdlib>
//#include<ctime>
//
//using namespace std;
//
//typedef long long ll;
//
//const ll L = 1000000000LL;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	string s;
//	cin >> s;
//
//	s = " " + s;
//	//1-数字
//	//2-雷
//	//3-安全
//	vector<int>vis(n + 2, 0);
//	int ans = 0;
//
//	queue<int>q;
//	for (int i = 1; i <= n; ++i) {
//		if (s[i] == '1') {
//			q.push(i);
//			vis[i] = 1;
//		}
//		else if (s[i] == '2') {
//			if (s[i - 1] == '?')
//				vis[i - 1] = 2;
//			if (s[i + 1] == '?')
//				vis[i + 1] = 2;
//			vis[i] = 1;
//		}
//		else if (s[i] == '0') {
//			if (i-1>=1&&s[i - 1] == '?' && vis[i - 1] == 0) {
//				++ans;
//				vis[i - 1] = 3;
//			}
//			if (i+1<=n&&s[i + 1] == '?' && vis[i + 1] == 0) {
//				++ans;
//				vis[i + 1] = 3;
//			}
//			vis[i] = 1;
//		}
//	}
//	
//	auto check = [&](int p) {
//		if (p - 1 >= 1 && s[p - 1] == '1')
//			q.push(p - 1);
//		if (p + 1 <= n && s[p + 1] == '1')
//			q.push(p + 1);
//		};
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		int mine = 0;
//		int unknown = 0;
//
//		int f[2], cnt = 0;
//
//		if (u - 1 >= 1) {
//			if (vis[u - 1] == 2)
//				++mine;
//			else if (vis[u - 1] == 0) {
//				++unknown;
//				f[cnt++] = u - 1;
//			}
//		}
//
//		if (u + 1 <= n) {
//			if (vis[u + 1] == 2)
//				++mine;
//			else if (vis[u + 1] == 0) {
//				++unknown;
//				f[cnt++] = u + 1;
//			}
//		}
//
//		//有一个雷，另一个邻居安全
//		if (mine == 1) {
//			for (int i = 0; i < cnt; ++i) {
//				int p = f[i];
//
//				if (vis[p] == 0) {
//					vis[p] = 3;
//					++ans;
//					check(p);
//				}
//			}
//		}
//		//缺一个雷，另一个邻居是雷
//		else if (mine == 0 && unknown == 1) {
//			for (int i = 0; i < cnt; ++i) {
//				int p = f[i];
//
//				if (vis[p] == 0) {
//					vis[p] = 2;
//					check(p);
//				}
//			}
//		}
//	}
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