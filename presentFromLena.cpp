# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    int num; 
    cin>>num;

    int  n = num;
    for(int i =0; i<=num; i++){
        for(int j = 0; j<num-i; j++){
            cout<<"  ";
        }
        int j = 0;
        for(; j<=i; j++){
            cout<<j<<' ';
            
        }
        j-=2;
        for(;j>=0; j--){
            cout<<j;
            if(j!=0){
                cout<<' ';
            }
        }
        cout<<'\n';

    }
    for(int i =0; i<num; i++){
        for(int j =0; j<=i; j++){
            cout<<"  ";
        }
        int j = 0;
        for(;j<num-i; j++){
            cout<<j<<' ';
            
        }
        j-=2;
        for(;j>=0; j--){
            cout<<j<<' ';
           
        }
        cout<<'\n';

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