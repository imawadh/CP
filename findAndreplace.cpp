# include <bits/stdc++.h>
using namespace std;
 
 // accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set <char> evenIndex;
    unordered_set <char> oddIndex;
    bool flag = true;

    for(int i =0; i<n; i++)
    {
        if(i%2==0){
            if(oddIndex.find(s[i])!=oddIndex.end()){
                flag = false;
                break;

            }
            else{
                evenIndex.insert(s[i]);
            }
        }
        else{
            if(evenIndex.find(s[i])!=evenIndex.end()){
                flag=false;
                break;
            }
            else{
                oddIndex.insert(s[i]);
            }
        }
    }
    if(flag){
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