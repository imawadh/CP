# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int upper_bound_index(const vector<int>& arr, int target) {
    int left = 0, right = arr.size()-1;

    while (left < right) {
        int mid = left + (right - left) / 2;  
        if (arr[mid] <= target) {
            left = mid + 1; 
        } else {
            right = mid; 
        }
    }
    
    return left; 
}
int lower_bound_index(const vector<int>& arr, int target) {
    int left = 0, right = arr.size()-1;
    
    while (left < right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] >= target) {
            left = mid + 1; 
        } else {
            right = mid;
        }
    }
    
    return left; 
}
 
void awadh_solution(){
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> v(n);
    long long sum = 0;
    for(int i =0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    long long ans = 0;
    for(int i =0; i<n; i++){
        int lower = sum-v[i]-k;
        int upper = sum-v[i]-m;
        int lower_term = lower_bound_index(v,lower);
        int upper_term = upper_bound_index(v,upper);
        ans+=(upper_term-lower_term);


    }
    cout<<ans/2<<'\n';
 
 
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