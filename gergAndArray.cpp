# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    int n,m,q;
    cin>>n>>m>>q;
    vector <int> v(n),v2(n+1,0);
    for(int i =0; i<n; i++) cin>>v[i];// input to the original array
    vector <vector<int>> v3(m,vector <int> (3));
    for(int i =0; i<m; i++)
    {
        for(int j =0; j<3; j++) cin>>v3[i][j];
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        a--;
        for(int i =a; i<=b-1; i++)
        {
            v2[i]+=v2[v3[a][2]];
            v2[i]-=v2[v3[b][2]];

        }
        
    }

    // resultant vector prefix sum 
    for(int i =0; i<=n; i++){
        v2[i];

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