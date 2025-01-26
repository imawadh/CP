# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
vector <long long> v(110,0);
 
void awadh_solution(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 1; i<=60;i++){
        set <int> st;
        ll  num = (1LL << i);
        for(int j =0; j<n; j++){
            st.insert(v[j]%num);
        }
        if(st.size()==2){
            // cout<<(1LL<<i)<<'\n';
            cout<<num<<'\n';
            return;
        }
    }
    // cout<<"Hello ";
 
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