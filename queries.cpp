# include <bits/stdc++.h>
using namespace std;

//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    vector <int> v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i =0; i<m; i++)
    {
        int k;
        cin>>k;
        int start = 0;
        int end =  n-1;
        while(start<=end){
            int mid =  start + (end-start)/2;
            if(v[mid]<=k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        cout<<start<<' ';
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