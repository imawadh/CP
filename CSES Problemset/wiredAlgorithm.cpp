# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    long long int a;
    cin>>a;
    while(a!=1){
        if((a&1)==0){
            cout<<a<<' ';
            a/=2;
        }
        else{
            cout<<a<<' ';
            a*=3;
            a++;
        }
    }
    cout<<1;
    return;
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}