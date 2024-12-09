# include <bits/stdc++.h>
using namespace std;
 
 //accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    int n,q;
    cin>>n>>q;
    vector <long >  v(n+1);
    v[0]=0;
    for(int i =1; i<n+1; i++)
    {
        int num;
        cin>>num;
        v[i]=num+v[i-1];

    }
    for(int i =0; i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[b]-v[a-1]<<'\n';
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