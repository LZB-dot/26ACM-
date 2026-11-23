////
//////https://codeforces.com/problemset/problem/2276/E
////
//////ai
//////优化 原本可能需要遍历每个点 然后去继承左右的 很麻烦
//////		可以直接改成统计当前位置所有的子串 然后再减去不合法的子串
////
////
////#include<iostream>
////#include<vector>
////#include<unordered_map>
////#include<string>
////
////using namespace std;
////
////typedef long long ll;
////
////void solve() {
////	int n;
////	cin >> n;
////
////	string s;
////	cin >> s;
////	s = " " + s;
////
////	vector<int>r1(n + 2, n + 1), r2(n + 2, n + 1);
////
////	string a = "2025", b = "2026";
////
////	for (int i = 1; i <= n; ++i) {
////		int p = i;
////		bool f = 1;
////
////		int x = p;
////
////		for (int j = 0; j < 4; ++j) {
////			while (p <= n && s[p] != a[j])
////				++p;
////
////			if (p > n) {
////				f = false;
////				break;
////			}
////
////			++p;
////			if (j == 3)
////				x = p;
////		}
////
////		if (f)
////			r1[i] = p - 1;
////
////		// 修改：独立贪心匹配 2026
////		p = i;
////		f = 1;
////
////		for (int j = 0; j < 4; ++j) {
////			while (p <= n && s[p] != b[j])
////				++p;
////
////			if (p > n) {
////				f = false;
////				break;
////			}
////
////			++p;
////		}
////
////		if (f)
////			r2[i] = p - 1;
////	}
////
////
////	vector<ll>diff(n + 3, 0);
////	vector<ll>bad(n + 2, 0);
////
////
////	for (int l = 1; l <= n; ++l) {
////		int x = r1[l];
////		int y = r2[l];
////
////		if (x >= y)
////			continue;
////
////		int k = y - x;
////
////		diff[l] += k;
////		diff[x + 1] -= k;
////
////		for (int i = x + 1; i < y; ++i) {
////			int tmp = y - i;
////
////			diff[i] += tmp;
////			diff[i + 1] -= tmp;
////		}
////	}
////
////	ll sum = 0;
////	for (int i = 1; i <= n; ++i) {
////		sum += diff[i];
////		bad[i] = sum;
////	}
////
////	for (int i = 1; i <= n; ++i) {
////		ll total = 1LL * i * (n - i + 1);
////		ll ans = total - bad[i];
////
////		cout << ans << " ";
////	}
////
////	cout << "\n";
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	int T;
////	cin >> T;
////
////	while (T--)
////		solve();
////
////	return 0;
////}
//
//
//
//
////ai
////1.可以预处理最近的位置 然后进行跳跃
////2.可以将一个一次函数 用两个差分数组维护
//
//
//
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<string>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	string s;
//	cin >> s;
//	s = " " + s;
//
//	vector<int>r1(n + 2, n + 1), r2(n + 2, n + 1);
//	string a = "2025", b = "2026";
//
//	vector<vector<int>>nxt(n + 2, vector<int>(10, n + 1));
//
//	for (int i = n; i >= 1; --i) {
//		nxt[i] = nxt[i + 1];
//		nxt[i][s[i] - '0'] = i;
//	}
//
//	for (int i = n; i >= 1; --i) {
//		int p = i;
//		bool f = 1;
//
//		for (int j = 0; j < 4; ++j) {
//			p = nxt[p][a[j] - '0'];
//
//			if (p == n + 1) {
//				f = false;
//				break;
//			}
//
//			++p;
//		}
//
//		if (f)
//			r1[i] = p - 1;
//
//		p = i;
//		f = 1;
//
//		for (int j = 0; j < 4; ++j) {
//			p = nxt[p][b[j] - '0'];
//
//			if (p == n + 1) {
//				f = false;
//				break;
//			}
//
//			++p;
//		}
//
//		if (f)
//			r2[i] = p - 1;
//	}
//
//
//	vector<ll>d1(n + 3, 0), d2(n + 3, 0);
//	vector<ll>bad(n + 2, 0);
//
//
//	for (int l = 1; l <= n; ++l) {
//		int x = r1[l];
//		int y = r2[l];
//
//		if (x >= y)
//			continue;
//
//		int k = y - x;
//
//		d2[l] += k;
//		d2[x + 1] -= k;
//
//		d1[x + 1] -= 1;
//		d1[y] += 1;
//
//		d2[x + 1] += y;
//		d2[y] -= y;
//	}
//
//	ll s1 = 0, s2 = 0;
//	for (int i = 1; i <= n; ++i) {
//		s1 += d1[i];
//		s2 += d2[i];
//		bad[i] = s1 * i + s2;
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		ll total = 1LL * i * (n - i + 1);
//		ll ans = total - bad[i];
//
//		cout << ans << " ";
//	}
//
//	cout << "\n";
//}
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