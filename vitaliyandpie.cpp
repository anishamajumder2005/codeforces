#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    string s;
    cin>>s;
    vector<int>cnt(256,0);
    ll ans=0;
    for(ll i=0;i<(ll)s.size();i++){
        if(islower(s[i]))cnt[s[i]-'0']++;
        else if(toupper(s[i])){
            if(cnt[tolower(s[i])-'0']>0){
                cnt[tolower(s[i])-'0']--;
            }else ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}