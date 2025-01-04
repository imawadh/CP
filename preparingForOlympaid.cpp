# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
 // accepted
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    vector <int> v1(n);
    vector <int> v2(n-1);
    for(int i =0; i<n; i++){
        cin>>v1[i];
    }
    int x;
    cin>>x;
    long long sum1 = 0;
    long long sum2 = 0;
    for(int i =0; i<n-1; i++){
        cin>>v2[i];
        if(v1[i]>v2[i]){
            sum1+=v1[i];
            sum2+=v2[i];
        }

    }
    sum1+=v1[n-1];
    cout<<sum1-sum2<<'\n';
 
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