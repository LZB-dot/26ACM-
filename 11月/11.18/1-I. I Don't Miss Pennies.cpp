//
//
////https://codeforces.com/gym/106796/problem/I
//
////可以优化成只有四个数
//
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	vector<int>p(n + 1, 0);
//	vector<int>cnt(5);
//
//	int minus = 0;
//	
//	for (int i = 1; i <= n; ++i) {
//		cin >> p[i];
//		p[i] %= 5;
//		cnt[p[i]]++;
//
//		if (p[i] == 1 || p[i] == 2)
//			minus += p[i];
//	}
//
//	//cout << minus << "\t---\n";
//
//	//for (int i = 1; i <= 4; ++i)
//	//	cout << cnt[i] << "---\n";
//
//	minus += 2 * min(cnt[3], cnt[4]);
//
////	cout << minus << "\t---\n";
//
//
//	if (cnt[3] > cnt[4]) {
//		cnt[3] -= cnt[4];
//		minus += (cnt[3] / 2);
//
//		if (cnt[3] % 2 == 1)
//			minus -= 2;
//
//	}
//	else if (cnt[3] < cnt[4]) {
//		cnt[4] -= cnt[3];
//		minus += 2 * (cnt[4] / 3);
//		minus -= cnt[4] % 3;
//	}
//	
//	cout << minus << "\n";
//
//	return 0;
//}