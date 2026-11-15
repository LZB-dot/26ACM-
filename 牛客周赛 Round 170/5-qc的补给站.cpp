#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
#include<algorithm>

using namespace std;

typedef long long ll;

const int MAXN = 2e5 + 10;

ll n;
ll a[MAXN];
ll lmi[MAXN << 2], rmi[MAXN << 2];
ll ans = 0;

void up(int i) {
	lmi[i] = max(lmi[i << 1], lmi[i << 1 | 1]);
	rmi[i] = min(rmi[i << 1], rmi[i << 1 | 1]);
}

void build(int l, int r, int i) {
	if (l == r) {
		lmi[i] = max(l - a[l], 0LL);
		rmi[i] = min(r + a[l], n + 1);

	}
	else {
		int mid = l + (r - l >> 1);

		build(l, mid, i << 1);
		build(mid + 1, r, i << 1 | 1);

		up(i);
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	build(1, n, 1);
	cout << ans << "\n";

	return 0;
}