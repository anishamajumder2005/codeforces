#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;string s;
        cin>>n>>s;
        ll p=0,ans=0;
        vector<int>v;
        for(ll i=0;i<n;i++){
            if(s[i]=='(')v.push_back(i);
            else if(s[i]==')'){
                ans+=i-v.back();
                v.pop_back();
            }else{
                if(v.size()==0)v.push_back(i);
                else{
                    ans+=i-v.back();
                    v.pop_back();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}