#include <bits/stdc++.h>
using namespace std;

// Typedef
typedef long long ll;

string s;

void awadh_solution() {
    cin >> s;
    bool flag = false;
    int idx = -1;
    
    
    if(s[0]>='5'){
        cout<<'1';
        for (int i = 0; i<s.size(); i++) {
            cout<<'0';
        }
        cout<<'\n';
        return;
    }
    for (int i = 0; i<s.size(); i++) {
        if (s[i] >= '5') {
            flag = true;
            idx = i;
            break;
        }
    }

    for (int i = 0; i<s.size(); i++) {
        if (s[i] >= '5') {
            flag = true;
            idx = i;
            break;
        }
    }

    
    if (!flag) {
        cout << s << '\n';
        return;
    }

    
    while (idx >= 0) {
        if (s[idx] < '4') {
            break;
        }
        idx--;
    }
    
    // idx++; 
    
   
    for (int i = 0; i < idx; i++) {
        cout << s[i];
    }

    
    cout << char(s[idx] + 1);

    for (int i = idx + 1; i < s.size(); i++) {
        cout << '0';
    }
    
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
