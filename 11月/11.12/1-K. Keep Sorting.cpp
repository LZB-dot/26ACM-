//
////https://codeforces.com/gym/106611/problem/K
//
////my
////修改1--L,R的推理
////修改2--move是移动构造，不会复制元素。
//// vector<int>a;
//// vector<int>b=move(a);
//// 只是把数组a内部管理数组的指针、长度、容量这几个变量直接偷给tmp，a会变成一个空数组
//
//
////ai
////修改1--用两次操作时 不只考虑先前再后 还需要考虑先后再前
////修改2--修改用2次的时候的边界为l和r
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
//
//void solve() {
//	int n;
//	cin >> n;
//
//	bool f = 0;
//	int l = 3 * n + 1, r = 0;
//
//	vector<int>a(n * 3 + 1, 0);
//	for (int i = 1; i <= n * 3; ++i) {
//		cin >> a[i];
//
//		if (a[i] != i) {
//			f = 1;
//
//			int tl = min(a[i], i);
//			int tr = max(a[i], i);
//
//			l = min(l, tl);
//			r = max(r, tr);
//		}
//	}
//
//
//	if (!f)
//		cout << "0\n";
//	else {
//		if (r - l + 1 > 2 * n) {
//			vector<int> t1 = a;
//			vector<int> t2 = a;
//
//			sort(t1.begin() + l, t1.begin() + l + 2 * n);
//			sort(t1.begin() + r - 2 * n + 1, t1.begin() + r + 1);
//
//			bool f1 = 1;
//			for (int i = 1; i <= 3 * n; ++i) {
//				if (t1[i] != i) {
//					f1 = 0;
//					break;
//				}
//			}
//
//			sort(t2.begin() + r - 2 * n + 1, t2.begin() + r + 1);
//			sort(t2.begin() + l, t2.begin() + l + 2 * n);
//
//			bool f2 = 1;
//			for (int i = 1; i <= 3 * n; ++i) {
//				if (t2[i] != i) {
//					f2 = 0;
//					break;
//				}
//			}
//
//			if (f1) {
//				cout << "2\n";
//				cout << l << " " << l + 2 * n - 1 << "\n";
//				cout << r - 2 * n + 1 << " " << r << "\n";
//			}
//			else if (f2) {
//				cout << "2\n";
//				cout << r - 2 * n + 1 << " " << r << "\n";
//				cout << l << " " << l + 2 * n - 1 << "\n";
//			}
//			else {
//				cout << "3\n";
//				cout << "1 " << 2 * n << "\n";
//				cout << n + 1 << " " << 3 * n << "\n";
//				cout << "1 " << 2 * n << "\n";
//			}
//		}
//		else {
//			cout << "1\n";
//			cout << l << " " << r << "\n";
//		}
//	}
//
//	return;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}