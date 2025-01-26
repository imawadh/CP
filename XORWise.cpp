# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    //accepted 
    int n,m;
    cin>>n>>m;
    int ans = 0;
    for(int i =0; i<32; i++){
        int ct = 0;
        if((n>>i)&1){
            ct++;
        }// Checking if ith bit is on or not in n
        if((m>>i)&1){
            ct++;
        }// Checking if ith bit is on or not in m
        if(ct==1){
            ans =  ans | (1<<i);// setting the ith bit if the parity of 1 is odd because we need to minimize it.
        }
        // cout<<ct<<' ';
    }
    cout<<ans<<'\n';
    // cout<<'\n';
 
 
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