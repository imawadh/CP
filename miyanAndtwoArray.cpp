# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
// accepted 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    set<int> st1;
    set<int>st2;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        st1.insert(num);
    }
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        st2.insert(num);
    }
    if(st1.size()+st2.size()>=4){
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