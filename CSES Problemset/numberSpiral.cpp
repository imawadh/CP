# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int a;
    cin>>a;
    vector <vector <int>> v(a,vector <int> (a));
    int i =0;
    int j = 0;
    int start = 1;
    while(i!=a && j!=a){
        v[i][j] = start++;
        j++;
        while(j!=0){
            v[i][j]=start++;
        }
        i++;
        while(i!=j){
            v[i][j]=start++;
        }



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