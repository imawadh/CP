# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    // cout<<str<<'\n';
    for(int i =0; i<str.size(); i++){
        if(str[i]=='p'){
            str[i]='q';
        }
        else if(str[i]=='q'){
            str[i]='p';
        }
    }
    cout<<str<<'\n';
 
 
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