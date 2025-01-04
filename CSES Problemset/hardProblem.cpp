# include <bits/stdc++.h>
using namespace std;
 // accpeted 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;

    int ans = 0;
    int remain = 0;

    // for a
    if(m>=a){
        remain+=(m-a);
        ans += a;
    }
    else{
        ans += m;
        remain += 0;
    }

    // for b
    if(m>=b){
        remain+=(m-b);
        ans +=b;
    }
    else{
        ans+=m;
        remain += 0;
    }

    // for c
    // if(remain>=c){
    //     ans+=c;  
    // }
    // else{
    ans+=min(c,remain);
    // }
    cout<<ans<<'\n';
 
 
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