#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++);

// Typedef
typedef long long ll;

void awadh_solution() {
    int size;
    cin >> size;
    vector<int> v(size);
    
   
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    
    int mid = size / 2;
    int ans = 0;

    
    for (int i = 0; i < mid; i++) {
        if (v[i] != v[mid]) {
            ans++;
        }
    }

   
    for (int i = mid + 1; i < size; i++) {
        if (v[i] != v[mid]) {
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    while (test--) {
        awadh_solution();
    }
}
