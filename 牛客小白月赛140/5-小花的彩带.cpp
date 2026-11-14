//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<climits>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 998244353;
//
//void solve() {
//	int n, L, R;
//	cin >> n >> L >> R;
//
//	string s;
//	cin >> s;
//	s = " " + s;
//
//	int mx = 0, c1 = 0, c0 = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		if (s[i] == '?') 
//			c1 = c0 = 0;
//		else if (s[i] == '1') {
//			c0 = 0;
//			++c1;
//			mx = max(c1, mx);
//		}
//		else {
//			c1 = 0;
//			++c0;
//			mx = max(c0, mx);
//		}
//	}
//
//	if (mx > R) {
//		cout << 0 << '\n';
//		return;
//	}
//
//	vector<int> dp0(n + 1, 0), dp1(n + 1, 0);
//
//	//dp 0/1的前缀和
//	vector<int> s0(n + 1, 0), s1(n + 1, 0);
//
//	//最近一次出现固定0和固定1的位置
//	int last0 = 0, last1 = 0;
//
//	for (int i = 1; i <= n; ++i) {
//
//		if (s[i] == '0') 
//			last0 = i;
//		if (s[i] == '1') 
//			last1 = i;
//
//		//最后一段全部为 0
//		int left = max({ 1, i - R, last1 });
//		int right = i - L;
//
//		if (left <= right) 
//			dp0[i] = (s1[right] - s1[left - 1] + MOD) % MOD;
//
//		//最后一段全部为 1
//		left = max({ 1, i - R, last0 });
//		right = i - L;
//
//		if (left <= right) 
//			dp1[i] = (s0[right] - s0[left - 1] + MOD) % MOD;
//		
//		//整个前缀只有一段的情况
//		if (i >= L && i <= R) {
//			if (last1 == 0) 
//				dp0[i] = (dp0[i] + 1) % MOD;
//			
//			if (last0 == 0) 
//				dp1[i] = (dp1[i] + 1) % MOD;
//			
//		}
//
//		s0[i] = (s0[i - 1] + dp0[i]) % MOD;
//		s1[i] = (s1[i - 1] + dp1[i]) % MOD;
//	}
//
//	cout << (dp0[n] + dp1[n]) % MOD << '\n';
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
