# include <bits/stdc++.h>
using namespace std;

// accepted 
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    int n,m,k; 
    cin>>n>>m>>k;

    vector <int> v(m);
    for(int i = 0;i <m; i++)
    {
        cin>>v[i];
    }
    unordered_set <int> mp;
    for(int i =0; i<k; i++)
    {
        int num;
        cin>>num;
        mp.insert(num);
    }
   
        if(n-k==0){
            for(int i = 0;i <m; i++)
            {
                cout<<1;
            }
        }
        else if(n-k==1){
            for(int i =0; i<m; i++){
                if(mp.find(v[i])!=mp.end()){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }
        else{
             for(int i = 0;i <m; i++)
            {
                cout<<0;
            }
        }
        cout<<'\n';
    

 
 
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