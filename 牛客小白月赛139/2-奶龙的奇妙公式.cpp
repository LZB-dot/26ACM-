//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	vector<int>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	int cur = 1e6 + 10;
//	ll ans = 0;
//
//	for (int i = 1; i <= n; ++i) 
//		ans += a[i] * i;
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
//	while(T--)
//		solve();
//
//	return 0;
//}