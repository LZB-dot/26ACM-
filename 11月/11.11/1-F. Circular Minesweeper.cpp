//
////https://codeforces.com/gym/106802/problem/F
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
//ll cal(ll x) {
//	x %= L;
//	if (x <= 0)
//		x += L;
//	return x;
//}
//
//ll dist(ll a, ll b) {
//	ll d = llabs(a - b);
//	return min(d, L - d);
//}
//
//void solve() {
//	int n;
//	cin >> n;
//	int rem = n;
//
//	srand((unsigned)time(0));          
//
//	ll p1 = 1, p2 = 0;
//	for (int i = 1; i <= 29; ++i) {
//		cout << "? " << p1 << "\n";
//		cout.flush();
//
//		string s;
//		ll d;
//		cin >> s >> d;
//
//		if (s == "YES") 
//			rem--;
//		
//
//		if (s == "NO" && i != 1) {
//			cout << "! " << p2 << "\n";
//			cout.flush();
//			return;
//		}
//
//		ll u = cal(p1 + d);
//		ll v = cal(p1 - d);
//
//		if (rem == 1) {
//			ll t = (d != 1) ? 1 : 2;
//			ll y = cal(p1 + t);
//
//			cout << "? " << y << "\n";
//			cout.flush();
//			string s2;
//			ll d2;
//			cin >> s2 >> d2;
//
//			ll du = dist(y, u);
//			ll dv = dist(y, v);
//
//			if (d2 == du)
//				cout << "! " << u << "\n";
//			else
//				cout << "! " << v << "\n";
//
//			cout.flush();
//			return;
//		}
//
//		if (rand() & 1) {
//			p1 = u;
//			p2 = v;
//		}
//		else {
//			p1 = v;
//			p2 = u;
//		}
//	}
//
//	cout << "! " << p2 << "\n";
//	cout.flush();
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