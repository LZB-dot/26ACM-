//
////https://codeforces.com/gym/106841/problem/G
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 1005;
//const ll INF = 9000000000000000000LL;
//const int MOD = 1e9 + 7;
//const ll L = 2329089562800LL;
//
//ll big[MAXN][MAXN];
//ll dp[MAXN][MAXN];
//
//ll qpow(ll a, ll b) {
//	ll ans = 1;
//	while (b) {
//		if (b & 1)
//			ans = ans * a % MOD;
//		a = a * a % MOD;
//		b >>= 1;
//	}
//	return ans;
//}
//
//void solve() {
//	ll H, W, K;
//	cin >> H >> W >> K;
//
//	int xA, yA, xB, yB;
//	cin >> xA >> yA >> xB >> yB;
//
//	for (int x = 0; x <= W; x++)
//		for (int y = 0; y <= H; y++)
//			big[x][y] = 0;
//
//	for (int i = 1; i <= K; ++i) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		int s = (c - a + 1) * (d - b + 1);
//		ll weight = L / s;
//		for (int x = a; x <= c; ++x)
//			for (int y = b; y <= d; ++y)
//				big[x][y] = weight;
//	}
//
//	for (int x = 0; x <= W; x++)
//		for (int y = 0; y <= H; y++)
//			dp[x][y] = INF;
//
//	dp[xA][yA] = big[xA][yA];
//
//	for (int x = xA; x <= xB; ++x) {
//		for (int y = yA; y <= yB; ++y) {
//			if (x == xA && y == yA)
//				continue;
//
//			ll mi = INF;
//			if (x > xA)
//				mi = min(mi, dp[x - 1][y]);
//			if (y > yA)
//				mi = min(mi, dp[x][y - 1]);
//
//			if (mi != INF) 
//				dp[x][y] = mi + big[x][y];
//			
//		}
//	}
//
//	ll sum = dp[xB][yB];
//	ll inv = qpow(L % MOD, MOD - 2);
//	ll ans = ((sum % MOD) * inv) % MOD;
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
