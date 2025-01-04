# include <bits/stdc++.h>
using namespace std;
 
 //accepted 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    vector <int> v(n);
    int ct = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]==0){
            ct++;
        }
    }
    if(ct==n){
        cout<<0<<'\n';
    }
    else if(ct==0){
        cout<<1<<'\n';
    }
    else{
        for(int i = 0; i<n; i++){
            if(v[i]==0){
                ct--;
            }
            else{
                break;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(v[i]==0){
                ct--;
            }
            else{
                break;
            }
        }
        if(ct==0){
             cout<<1<<'\n';
        }
        else cout<<2<<'\n';
        
      
       
       
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