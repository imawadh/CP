# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int ans = 0;
    int n;
    cin>>n;
    vector <int> v(n);
    bool flag = true;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]<=(n-i-1)*2 || v[i]<=(i)*2){
            flag =  false;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}