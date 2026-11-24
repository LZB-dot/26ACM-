////
//////https://codeforces.com/problemset/problem/2275/F
////
//////1e6 以内有 78498 个质数
////
////#include<iostream>
////#include<vector>
////#include<map>
////#include<random>
////#include<chrono>
////
////using namespace std;
////
////typedef unsigned long long ull;
////typedef long long ll;
////
////const int MAXN = 1e6 + 10;
////
////int spf[MAXN];
////
////
////struct State {
////	ull x, y;
////
////	bool operator<(const State& other)const {
////		if (x != other.x)
////			return x < other.x;
////
////		return y < other.y;
////	}
////};
////
////State r[MAXN];
////State h[MAXN];
////
////State operator^(const State& a, const State& b) {
////	return {
////		a.x ^ b.x,
////		a.y ^ b.y
////	};
////}
////
////void init() {
////	for (int i = 2; i < MAXN; ++i) {
////		if (!spf[i]) {
////			spf[i] = i;
////
////			for (ll j =1LL* i * i; j < MAXN; j += i)
////				if (!spf[j])
////					spf[j] = i;
////		}
////
////	}
////
////	mt19937_64 rng{
////		static_cast<ull>(
////			chrono::steady_clock::now().time_since_epoch().count()
////		)
////	};
////
////	for (int i = 2; i < MAXN; ++i) {
////		if (spf[i] == i)
////			r[i] = { rng(),rng() };
////	}
////
////	h[1] = { 0,0 };
////
////	for (int i = 2; i < MAXN; ++i) {
////		int p = spf[i];
////		int x = i / p;
////
////		if (x % p == 0)
////			h[i] = h[x / p];
////		else
////			h[i] = h[x] ^ r[p];
////	}
////}
////
////
////
////void solve() {
////	int n;
////	cin >> n;
////	
////	vector<int>a(n + 1, 0);
////	map<State, ll>cnt;
////
////	for (int i = 1; i <= n; ++i) {
////		cin >> a[i];
////		cnt[h[a[i]]]++;
////	}
////
////	State pre = { 0,0 };
////	ll ans = 0;
////
////	for (int j = 1; j <= n; ++j) {
////		pre = pre ^ h[a[j]];
////		ans += cnt[pre];
////	}
////
////	cout << ans << "\n";
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	init();
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
////还是可能存在哈希冲突
//
//
//#include<iostream>
//#include<vector>
//#include<map>
//#include<random>
//#include<set>
//#include<chrono>
//
//using namespace std;
//
//typedef unsigned long long ull;
//typedef long long ll;
//
//const int MAXN = 1e6 + 10;
//
//int spf[MAXN];
//
//void init() {
//	for (int i = 2; i < MAXN; ++i) {
//		if (!spf[i]) {
//			spf[i] = i;
//
//			for (ll j = 1LL * i * i; j < MAXN; j += i) {
//				if (!spf[j])
//					spf[j] = i;
//			}
//		}
//	}
//}
//
//
//vector<int>get(int x) {
//	vector<int>res;
//
//	while (x > 1) {
//		int p = spf[x];
//		int cnt = 0;
//
//		while (x % p == 0) {
//			x /= p;
//			++cnt;
//		}
//
//		if (cnt & 1)
//			res.push_back(p);
//	}
//
//	return res;
//}
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<vector<int>>ker(n + 1);
//
//	for (int i = 1; i <= n; ++i) {
//		int x;
//		cin >> x;
//
//		ker[i] = get(x);
//	}
//
//	map<vector<int>, ll>cnt;
//	set<int>odd;
//
//	for (int i = 1; i <= n; ++i) {
//		for (int p : ker[i]) {
//			if (odd.count(p))
//				odd.erase(p);
//			else
//				odd.insert(p);
//		}
//
//		if (odd.size() <= 7) {
//			vector<int>key(odd.begin(), odd.end());
//			cnt[key]++;
//		}
//	}
//
//	ll ans = 0;
//
//	for (int i = 1; i <= n; ++i)
//		ans += cnt[ker[i]];
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	init();
//
//	int T;
//	cin >> T;
//
//	while (T--)
//		solve();
//
//	return 0;
//}