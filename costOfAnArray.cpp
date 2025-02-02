# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 // accepted 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    if(n==k){
        int ans =1;
        for(int i =1; i<n; i+=2){
            if(v[i]!=ans){
                break;
            }
            ans++;
        }
        cout<<ans<<'\n';
        return;
    }
    bool flag = true;
    int ct = 0;

    for(int i = 1; i<n; i++){
        if(v[i]==1){
            ct++;
        }
        else{
            break;
        }
    }
    if(ct>=n-k+1){
        cout<<2<<'\n';
    }
    else{
        cout<<1<<'\n';
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