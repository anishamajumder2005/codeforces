#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        for(ll i=0;i+1<s.size();i++){
            if(s[i]==s[i+1]){
                ans=s.substr(i,2);
                break;
            }
        }
        for(ll i=0;i+2<s.size();i++){
            if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2]){
                ans=s.substr(i,3);
                break;
            }
        }
        if(ans.empty())cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}