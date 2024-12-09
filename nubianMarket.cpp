# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i =0; i<n; ++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long sum = 0;
    int ct = 0;
    for(int i =0; i<n; i++)
    {
        sum = sum + (i+1)*(i+1) + v[i];
        sum = sum + (i*(i+1))/2;
        if(sum>k){
            sum = sum - ((i+1)*(i+1) + v[i]);
            sum = sum - ((i*(i+1))/2);
            break;
        }
        ct++;
    }
    cout<<ct<<' '<<sum<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}