# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,k;
    cin>>n>>k;

    vector <int> v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // for(int i = 0; i<n; i++){
    //    cout<<v[i]<<' ';
    // }
    
    long long sum  = 0;
    for(int i =0; i<n; i++){
        sum+=v[i];
        if(sum>k){
            // cout<<sum<<' ';
        
            sum-=v[i];
            // cout<<sum<<' ';
            break;
        }  
    }
    
    cout<<k-sum<<'\n';
 
 
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