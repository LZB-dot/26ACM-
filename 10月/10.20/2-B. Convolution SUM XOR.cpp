//
//
////https://codeforces.com/gym/104333/problem/B
//
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//
//int n;
//vector<ll>a, b;
//int bit;
//
//ll memo[1 << 16][2];
//
//int count1(int mask) {
//	int cnt = 0;
//
//	while (mask) {
//		if (mask & 1)
//			++cnt;
//		mask >>= 1;
//	}
//
//	return cnt;
//}
//
////{异或为0的方案数，异或为1的方案数}
////mask标记的是a数组哪些元素已选
////然后b数组元素下标对应已选元素的个数
//pair<int, int>dfs(int mask) {
//	
//	if (memo[mask][0] != -1)
//		return { memo[mask][0],memo[mask][1] };
//
//	int k = count1(mask);
//	if (k == n)
//		return { 1,0 };
//
//	ll res0 = 0, res1 = 0;
//
//	for (int i = 0; i < n; ++i) {
//		if (mask & (1 << i))
//			continue;
//
//		//假设当前位放a[i]元素
//		//找出这次dp寻找bit位的值
//		ll sum = a[i] + b[k];
//		int tmp = (sum >> bit) & 1;
//
//
//		auto it = dfs(mask | (1 << i));
//		//后面所有配对 这一位为0/1的方案数
//		ll nxt0 = it.first;
//		ll nxt1 = it.second;
//
//		if (tmp == 0) {
//			res0 = (res0 + nxt0) % MOD;
//			res1 = (res1 + nxt1) % MOD;
//		}
//		else {
//			res0 = (res0 + nxt1) % MOD;
//			res1 = (res1 + nxt0) % MOD;
//		}
//	}
//
//	memo[mask][0] = res0;
//	memo[mask][1] = res1;
//
//	return { res0, res1 };
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> n;
//
//	a.resize(n);
//	b.resize(n);
//
//	for (int i = 0; i < n; i++) 
//		cin >> a[i];
//	for (int i = 0; i < n; i++)
//		cin >> b[i];
//
//	ll ans = 0;
//
//	//枚举每一个二进制位进行dp
//	for (bit = 0; bit <= 30; ++bit) {
//		memset(memo, -1, sizeof(memo));
//		
//		auto p = dfs(0);
//
//		//该位为1的排列数量
//		ll c1 = p.second;
//
//		ll val = (1LL << bit) % MOD;
//		ans = (ans + val * c1) % MOD;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}