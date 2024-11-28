#include <bits/stdc++.h>
using namespace std;


//accepted 

// Typedef
typedef long long ll;

void awadh_solution() {
    int n;
    cin >> n;
    vector<int> v(n+1); 
   

    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        
    }
    
    int possibleMax = v[n] - v[1];

    // no fix
    for (int i = 1; i <= n-1; ++i) {
        possibleMax = max(possibleMax, v[i] - v[i + 1]);
    }
    // fix 1
    for (int i = 2; i <= n; ++i) {
        possibleMax = max(possibleMax, v[i] - v[1]);
    }

    // fix n
    for (int i = 1; i <= n-1; ++i) {
        possibleMax = max(possibleMax, v[n] - v[i]);
    }
    
        cout << possibleMax;
    
    cout << '\n';
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
