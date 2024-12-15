# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,k;
    cin>>n>>k;

    vector <int> v(n);
    
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    long long sum = 0;
    int ans = 0;
    unordered_map <int,int> m;
    m[0]=1;
    for(int i = 0; i<n; i++)
    {
        sum+=v[i];
        if(sum==k){
            ans++;
        }
        else if(m.find(sum-k)!=m.end()){
            ans = ans + m[(sum-k)];
        }
        m[sum]++;
    }
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