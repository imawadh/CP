# include <bits/stdc++.h>
using namespace std;
 
 // accepted 
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long sum = a+b+c;
    int days = (n/sum);
    // cout<<"Days = "<<days;
    long long  total = days * sum;
    // cout<<"Total = "<<total<<'\n';
    days*=3;
    if(total>=n){
        cout<<days<<'\n';
        return;
    }
    if(total<n){
        total+=a;
        days+=1;
    }
    if(total>=n){
        cout<<days<<'\n';
        return;
    }
    if(total<n){
        total+=b;
        days+=1;
    }
    if(total>=n){
        cout<<days<<'\n';
        return;
    }
    if(total<n){
        total+=c;
        days+=1;
    }
    if(total>=n){
        cout<<days<<'\n';
        return;
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