

//https://atcoder.jp/contests/abc149/tasks/abc149_e



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a.begin() + 1, a.end(), greater<ll>());

    vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        pre[i] = pre[i - 1] + a[i];

    auto check = [&](ll x) -> ll {
        ll cnt = 0;
        int j = n;
        for (int i = 1; i <= n; ++i) {
            while (j >= 1 && a[i] + a[j] < x) {
                j--;
            }
            if (j < 1)
                break;
            cnt += j; 
        }
        return cnt;
     };

    ll left = 0, right = 2 * a[1];
    ll tmp = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (check(mid) >= m) {
            tmp = mid;
            left = mid + 1; 
        }
        else {
            right = mid - 1;
        }
    }

    ll sum = 0;
    ll cnt = 0;

    int j = n;
    for (int i = 1; i <= n; ++i) {
        while (j >= 1 && a[i] + a[j] < tmp) 
            j--;
        
        if (j < 1) 
            break;

        ll cur = j;
        cnt += cur;
        sum += cur * a[i] + pre[cur];
    }

    sum -= (cnt - m) * tmp;

    cout << sum << "\n";

    return 0;
}