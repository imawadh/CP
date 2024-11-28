# include <bits/stdc++.h>
using namespace std;
 
 // accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    int ct = 0;
    while(n--)
    {
        int m;
        cin>>m;
        if(m&1){
            ct++;
        }
    }
    if((ct&1)==0){
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
