# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    vector <int> v(101,0);
    v[0]=1;
    v[1]=6;
    int odd = 3;
    for(int i = 2; i<101; i++)
    {
        v[i] = odd * 4 + 4;
        v[i]+=v[i-1];
        odd+=2;
    }
    int ans = 0;
    int ptr =  0;
    int num;
    cin>>num;
    int sum  =0;
    for(int i =0; i<num; i++)
    {
        int val;
        cin>>val;
        sum+=val;
        if(sum>=v[ptr]){
            if(sum==v[ptr]){
                ans++;
            }
            for(int j =ptr+1; j<num; j++)
            {
                if(v[j]>v[ptr]){
                    ptr= j;
                    break;
                }
            }
            
        }
        
    }
    cout<<ans<<'\n';

 
 
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