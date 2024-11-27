# include <bits/stdc++.h>
using namespace std;

// accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

unordered_set <string> ans;

void awadh_solution(){
    int size;
    cin>>size;
    string s;
    cin>>s;

    int ans = size-1;
    string str = s.substr(0,2);
    
    for (int i = 0; i < size-1; ++i) { 
        if(s[i]==s[i+2])
        {
            ans--;
        }
    }
    cout<<ans<<'\n';
    
}

// memory limit exceeded

// void awadh_solution(){
//     int size;
//     cin>>size;
//     string s;
//     cin>>s;
    

//     for (int i = 0; i < size-1; ++i) { 
//         string new_string = s.substr(0, i) + s.substr(i + 2);
//         ans.insert(new_string);
//     }
    
//     cout<<ans.size()<<'\n';
//     ans.clear();
 
 
// }


 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}