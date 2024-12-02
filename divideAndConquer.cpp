# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int size;
    cin>>size;
    int ans = INT_MAX;
    int ct = 0;

    while(size--){
        int num;
        cin>>num;
        if(num&1){
            ct++;
            int c = 0;
            while((num&1)==1){
                num/=2;
                c++;
            }
            ans = min(ans,c);
        }
        else{
            int c = 0;
            while((num&1)!=1){
                num/=2;
                c++;
            }
            ans = min(ans,c);
        }
        
    }
    if((ct&1)==0){
        cout<<0<<'\n';
    }
    else{
        cout<<ans<<'\n';
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