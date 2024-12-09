# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string s;
    cin>>s;
    int one = 0;
    int three = false;
    int two = false;
    long long sum = 0;
    for(int i =0; i<s.size(); i++)
    {
        sum+=(s[i]-48);
        if(s[i]=='1'){
            one++;
        }
        if(s[i]=='2'){
            two ++;
        }
        if(s[i]=='3'){
            three ++;
        }
    }
    bool flag =  false;
    for(int i =0; i<two; i++)
    {
        sum+=4;
    }
 
 
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