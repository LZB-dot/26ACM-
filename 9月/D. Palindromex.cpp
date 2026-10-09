//
////https://codeforces.com/contest/2227/problem/D
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1e5 + 10;
//
//int a[MAXN << 1];
//int f1[MAXN], f2[MAXN];
//int s0, s1, s2;
//int n;
//
//bool check(int mid) {
//	if (mid == 1)
//		return true;
//
//	for (int i = 1; i <= 2 * n - mid + 1; ++i) {
//		int l = i;
//		int r = i + mid - 1;
//
//		int cnt = 0;
//		while (l <= r) {
//			if (a[l] > mid || a[r] > mid)
//				break;
//
//			if (a[l] == a[r])
//				++cnt;
//			else
//				break;
//
//			++l;
//			--r;
//		}
//
//		if (cnt == mid)
//			return true;
//	}
//
//	return false;
//}
//
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= 2 * n; ++i) {
//		cin >> a[i];
//		if (f1[a[i]] == 0)
//			f1[a[i]] = i;
//		else
//			f2[a[i]] = i;
//	}
//
//	s0 = f1[a[0]] + f2[a[0]];
//	s1 = f1[a[0]];
//	s2 = f2[a[0]];
//
//	int ans = 0;
//
//	for(int i=1;i<=)
//
//	/*int l = 2;
//	int r = n;
//	int ans = 0;
//
//	while (l <= r) {
//		int mid = l + ((r - l) >> 1);
//		if (check(mid)) {
//			ans = mid;
//			l = mid + 1;
//		}
//		else
//			r = mid - 1;
//	}*/
//
//	cout << ans << "\n";
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