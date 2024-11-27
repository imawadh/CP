# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int s,t;
    cin>>s>>t;
    
    vector <int> v(s+1);
    v[0]=0;
    int ct = 0;
    for(int i =1; i<=s; i++)
    {
        int val;
        cin>>val;
        if((val&1)==1){
            ct++;
        }
        v[i]=ct;   
    }
    

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int tempodd= ct-(v[m]-v[n-1]);// we need to make n-1 beacuse of number of odds will be taken from previous 

        // cout<<tempodd<<' ';

        if((k&1)==1) {
            tempodd = tempodd + m-n+1;
        }
        // cout<<tempodd<<' ';
        
        if(tempodd&1==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

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