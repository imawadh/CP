# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    unordered_set <int> singleelement;
    unordered_set <int> doubleelement;

    int size;
    cin>>size;

    for(int i =0; i<size; i++)
    {
        int num;
        cin>>num;
        if((singleelement.find(num))!=singleelement.end()){
            singleelement.erase(num);
            doubleelement.insert(num);
        }
        else{
             singleelement.insert(num);
        }

    }

    bool flag = true;
    long long  ans = 0;
    
    for( auto it:singleelement){
       
        if(flag){
            ans+=2;
        }
        flag=!flag;
    }
    for( auto it:doubleelement){
        
        ans+=1;
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