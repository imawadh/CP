# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

// long long size = 1e9;  // 10^9
vector<int> v(1e9, 0);
 
void awadh_solution(){
    long long prod = 1;

    for(int i =1; i<v.size(); i++){
        prod*=i;
        v[i]=prod;
        cout<<v[i]<<' ';
    }

    // int num,digit ;
    // cin>>num>>digit;

    // cout<<1<<' ';
    
    // if(digit%3==0){
        
    // }
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}