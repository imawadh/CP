# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

 
void awadh_solution(){
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> frequency;
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        frequency[num]++;
    } 
    if(k>=n){
        cout<<1<<'\n';
        return;
    }
    int ans = frequency.size();
    vector <int> v;

    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        int result = it->second;
        v.push_back(result);
    }

    sort(v.begin(),v.end());
    int sum=0;
    int ct = 0;
    for(int i =0; i<v.size(); i++){
        if(sum+v[i]>k){
            break;
        }
        else{
            sum+=v[i];
            ct++;
        }
    }
    cout<<ans-ct<<'\n';
    

 
 
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