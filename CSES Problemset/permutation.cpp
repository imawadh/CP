# include <bits/stdc++.h>
using namespace std;
//accpetd
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    else if(n<4){
        cout<<"NO SOLUTION\n";
    }
    else{
         for(int i = 2; i<=n; i+=2){
            cout<<i<<' ';
        }
        for(int i =1; i<=n; i+=2)
        {
            cout<<i<<' ';
        }
       
    }
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}