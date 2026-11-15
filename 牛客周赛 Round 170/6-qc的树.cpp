#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
#include<algorithm>

using namespace std;

typedef long long ll;

const int MAXN = 2e5 + 10;

int n;
int c[MAXN];

int head[MAXN], to[MAXN << 1], nxt[MAXN << 1];
int cnt = 1;

inline void add(int u, int v) {
	to[cnt] = v;
	nxt[cnt] = head[u];
	head[u] = cnt++;
}


int ans = 0;

void dfs(int u, int f) {
	for (int i = head[u]; i; i = nxt[i]) {
		int v = to[i];

		if (v != f) {
			if (c[u] != c[v])
				++ans;
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 1; i <= n; ++i)
		cin >> c[i];

	for (int i = 1; i < n; ++i) {
		int u, v;
		cin >> u >> v;

		add(u, v);
		add(v, u);
	}


	dfs(1, 0);

	cout << ans << "\n";

	return 0;
}