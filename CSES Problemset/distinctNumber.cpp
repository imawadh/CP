# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

// tle
// void awadh_solution(){
//     int n;
//     cin>>n;
//     unordered_set <int> uS;
//     for(int i =0; i<n; i++){
//         int num;
//         cin>>num;
//         uS.insert(num);
//     }
//     cout<<uS.size()<<'\n';

 
 
// }

void awadh_solution(){
    int n;
    cin>>n;
    set <int> S;
    for(int i =0; i<n; i++){
        int num;
        cin>>num;
        S.insert(num);
    }
    cout<<S.size()<<'\n';

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}