//
////https://codeforces.com/gym/106825/problem/D
//
////想当然了，明天的客人可以是0的
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    ll n;
//    cin >> n;
//
//    vector<ll>a(n + 1, 0);
//    ll mx = 0;
//    for (ll i = 1; i <= n; ++i) {
//        cin >> a[i];
//        mx = max(mx, a[i]);
//    }
//    
//
//    ll l = 0, r = mx;
//    ll ans = 0;
//
//    auto check = [&](const ll& x)->bool {
//
//        vector<ll>ta = a;
//          
//        ll rem = 0;
//        for (ll i = 1; i <= n; ++i) {
//            if (ta[i] > x) {
//                ll need = ta[i] - x;
//                rem -= need;
//
//                if (rem < 0)
//                    return false;
//            }
//            else {
//                ll cur = x - ta[i];
//                if (i == n)
//                    return true;
//
//                if (ta[i + 1] == 0) {
//                    rem += cur / 2;
//                    continue;
//                }
//
//                if (ta[i + 1] >= cur)
//                    ta[i + 1] -= cur;
//                else {
//                    cur -= ta[i + 1];
//
//                    if (cur & 1)
//                        ta[i + 1] = 1;
//                    else
//                        ta[i + 1] = 0;
//
//                    rem += (cur + 1) / 2;
//                }
//            }
//        }
//
//        return true;
//    };
//
//    while (l <= r) {
//        ll mid = l + (r - l >> 1);
//
//        if (check(mid)) {
//            ans = mid;
//            r = mid - 1;
//        }
//        else
//            l = mid + 1;
//    }
//
//    cout << ans << "\n";
//
//    return 0;
//}
