# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int s;
    cin>>s;
    int sum =0 ;
    
    for(int i =0; i<s; i++)
    {
        int num;
        cin>>num;
        if(num&1){
            sum+=num;
        }
        else{
            sum-=num;
        }


    }
    if(sum<0){
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