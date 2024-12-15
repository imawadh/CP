# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    int n;
    cin>>n;
    int ct  = 1;
    unordered_set <int> us;
    for(int i =0; i<n; i++){
        int num; 
        cin>>num;
        if(us.find(num)==us.end()){
            us.insert(num);
            cout<<num<<' ';
            continue;
        }
        while(us.find(ct)!=us.end()){
            ct++;
        }
        us.insert(ct);
        cout<<ct<<' ';


    }
    cout<<'\n';
 
 
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