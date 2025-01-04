# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    vector <int> v(26,0);
    int num;
    string str;
    cin>>num>>str;
    // for size = num
    if(num==str.size()){
        cout<<str<<'\n';
        return;
    }
    // no. of unique ke unique character 
    set <char> s;
    for(int i=0; i<str.size(); i++){
        v[str[i]-'a']+=1;
        s.insert(str[i]);
    }

    // if(size of unique element on the set is greater than num it is not possible)
    if(s.size()>num){
        cout<<-1<<'\n';
        return;
    }
    else{
        bool flag =  true;
        string ans = "";
        for(int i =0; i<26; i++){
            if(v[i]%num!=0){
                flag = false;
                break;
            }
            else if(v[i]%num==0 && v[i]>0){
                ans.push_back(char(i+97));
            }
            
        }
        if(!flag){
            cout<<-1<<'\n';
            return;
        }
        // cout<<ans<<'\n';
        int n = str.size();
        str =  ans;
        // cout<<str<<'\n';
        while(str.size()!=n){
            str+=ans;
        }
        cout<<str<<'\n';
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