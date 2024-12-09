# include <bits/stdc++.h>
using namespace std;
 // accepted
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    int ct  = 0;
    int size = 0;
    while(n--){
        string s;
        cin>>s;
        size+=s.size();
        if(size<=m){
            ct++;
        }
    }
 
    cout<<ct<<'\n';
 
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