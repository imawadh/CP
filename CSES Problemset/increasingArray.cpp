# include <bits/stdc++.h>
using namespace std;
 
 // accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int num;
    cin>>num;
    int max;
    cin>>max;
    num--;
    long long ans = 0;
    while(num--){
        int n;
        cin>>n;
        if(max>n){
            ans+=(max-n);
        }
        else{
            max = n;
        }
    }
    cout<<ans;
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}