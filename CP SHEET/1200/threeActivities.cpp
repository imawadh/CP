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
    vector <int> v1(n),v2(n),v3(n);
    vector<pair<int,int>> p1,p2,p3;
    for(int i = 0; i<n; i++){
        cin>>v1[i];
        p1.push_back(make_pair(v1[i],i));
        sort(p1.rbegin(),p1.rend());
        if(p1.size()>3){
            p1.pop_back();
        } 
    }
    for(int i = 0; i<n; i++){
        cin>>v2[i];
        p2.push_back(make_pair(v2[i],i));
        sort(p2.rbegin(),p2.rend());
        if(p2.size()>3){
            p2.pop_back();
        }
    }
    for(int i = 0; i<n; i++){
        cin>>v3[i];
        p3.push_back(make_pair(v3[i],i));
        sort(p3.rbegin(),p3.rend());
        if(p3.size()>3){
            p3.pop_back();
        }
    }
    int ans = 0;
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            for(int k = 0; k<3; k++){
                if(p1[i].second!=p2[j].second && p2[j].second!=p3[k].second && p1[i].second!=p3[k].second){
                    int sum = p1[i].first+p2[j].first+p3[k].first;
                    ans = max(sum,ans);
                }
                
            }
        }
    }
    int i= 0,j=0,k=0;

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
