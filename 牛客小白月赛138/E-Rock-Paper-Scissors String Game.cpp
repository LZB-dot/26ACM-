//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<unordered_map>
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
//	string ns;
//	for (int i = 1; i <= n; ++i) {
//		if (s[i] != s[i - 1])
//			ns += s[i];
//	}
//
//	int m = ns.size();
//	int type = 0;
//	
//	unordered_map<char, int>mp;
//	for (char c : ns)
//		mp[c]++;
//
//	type = mp.size();
//
//	if (m == 1)
//		cout << "Bob\n";
//	else if (type == 2) {
//		if (m == 2) {
//			if (ns == "RS" || ns == "PR" || ns == "SP")
//				cout << "Alice\n";
//			else
//				cout << "Bob\n";
//		}
//		else
//			cout << "Alice\n";
//	}
//	else
//		cout << "Alice\n";
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
//
//	return 0;
//}