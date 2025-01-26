#include <bits/stdc++.h>
using namespace std;
#define int                  int64_t
#define mod                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define all(arr)             arr.begin(), arr.end()
#define rall(arr)            arr.rbegin(), arr.rend()

void solve() {
    vector<int>arr = {90, 78 , 72 , 28};
    sort(all(arr));
    for(auto it : arr) cout << it << " ";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
}