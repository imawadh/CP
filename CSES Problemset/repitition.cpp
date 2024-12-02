# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string s;
    cin>>s;

    int ans = 1;
    int ct = 1;

    for(int i =1; i<s.size(); i++)
    {
        if(s[i]==s[i-1]){
            ct++;
        }
        else{
            
            ans = max(ct,ans);
            ct = 1;
        }
    }
    ans = max(ct,ans);
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