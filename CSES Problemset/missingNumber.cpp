# include <bits/stdc++.h>
using namespace std;

//accpted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    long long sum =0;
   
    for(int i =1; i<n; i++){
        int num;
        cin>>num;
        sum^=num;
        sum^=i;
        
    }
    sum^=n;
    

    cout<<sum<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}