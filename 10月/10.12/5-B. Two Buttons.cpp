//
////https://codeforces.com/problemset/problem/520/B
//
//
//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int MAXN = 20005;
//int pre[MAXN], suf[MAXN];
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//
//	if (n >= m) {
//		cout << n - m << "\n";
//		return;
//	}
//
//	memset(pre, -1, sizeof(pre));
//	memset(suf, -1, sizeof(suf));
//
//	queue<int>q1, q2;
//
//	q1.push(n);
//	pre[n] = 0;
//	q2.push(m);
//	suf[m] = 0;
//
//	while (!q1.empty() && !q2.empty()) {
//
//		int s1 = q1.size();
//		int s2 = q2.size();
//
//		for (int i = 1; i <= s1; ++i) {
//			int x = q1.front();
//			q1.pop();
//			if (suf[x] != -1) {
//				cout << suf[x] + pre[x] << "\n";
//				return;
//			}
//
//			if (x - 1 > 0 && pre[x - 1] == -1) {
//				pre[x - 1] = pre[x] + 1;
//				q1.push(x - 1);
//			}
//
//			if (x * 2 < MAXN && pre[x * 2] == -1) {
//				pre[x * 2] = pre[x] + 1;
//				q1.push(x * 2);
//			}
//		}
//
//		for (int i = 1; i <= s2; ++i) {
//			int x = q2.front();
//			q2.pop();
//
//			if (pre[x] != -1) {
//				cout << suf[x] + pre[x] << "\n";
//				return;
//			}
//
//			if (x + 1 < MAXN && suf[x + 1] == -1) {
//				suf[x + 1] = suf[x] + 1;
//				q2.push(x + 1);
//			}
//
//			if (x % 2 == 0 && suf[x / 2] == -1) {
//				suf[x / 2] = suf[x] + 1;
//				q2.push(x / 2);
//			}
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}
