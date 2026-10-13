//
////https://www.luogu.com.cn/problem/P1032
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_set>
//#include<unordered_map>
//#include<map>
//#include<queue>
//
//using namespace std;
//
//void solve() {
//	string A, B;
//	cin >> A >> B;
//
//	map<string, string>mpA, mpB;
//	string a, b;
//	while (cin >> a >> b) {
//		mpA[a] = b;
//		mpB[b] = a;
//	}
//
//
//	queue<string>q1, q2;
//	q1.push(A);
//	q2.push(B);
//
//	unordered_map<string, int>visA, visB;
//	visA[A] = 0;
//	visB[B] = 0;
//
//	int ans = 11;
//
//	while (!q1.empty() && !q2.empty()) {
//
//
//		int s1 = q1.size();
//		for (int i = 1; i <= s1; ++i) {
//			string s = q1.front();
//			q1.pop();
//
//			int d = visA[s];
//
//
//			for (auto it : mpA) {
//				int p = 0;
//
//				while ((p = s.find(it.first, p)) != string::npos) {
//					string tmp = s;
//					tmp.replace(p, it.first.size(), it.second);
//
//					if (visB.count(tmp))
//						ans = min(ans, d + 1 + visB[tmp]);
//
//					if (!visA.count(tmp)) {
//						if (d + 1 < ans && d + 1 <= 10) {
//							visA[tmp] = d + 1;
//							q1.push(tmp);
//						}
//					}
//
//					++p;
//				}
//
//			}
//		}
//
//		int s2 = q2.size();
//		for (int i = 1; i <= s2; ++i) {
//			string s = q2.front();
//			q2.pop();
//
//			int d = visB[s];
//
//
//			for (auto it : mpB) {
//				int p = 0;
//
//				while ((p = s.find(it.first, p)) != string::npos) {
//					string tmp = s;
//					tmp.replace(p, it.first.size(), it.second);
//
//					if (visA.count(tmp))
//						ans = min(ans, d + 1 + visA[tmp]);
//
//					if (!visB.count(tmp)) {
//						if (d + 1 < ans && d + 1 <= 10) {
//							visB[tmp] = d + 1;
//							q2.push(tmp);
//						}
//					}
//
//					++p;
//				}
//
//			}
//		}
//	}
//
//	cout << "NO ANSWER!\n";
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