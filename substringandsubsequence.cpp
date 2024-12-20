#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        ll n=s1.size();
        ll m=s2.size();
        ll ans=n+m;
        /*for(ll i=0;i<m;i++){
            ll j=i;
            for(auto c:s1){
                if(j<m&&c==s2[j])j++;
            }
            ans=min(ans,(n+m)-(j-i));
        }
        cout<<ans<<endl;*/
        unordered_multiset<char>st1,st2;
        for(auto it:s1)st1.insert(it);
        for(auto it:s2)st2.insert(it);
        ll cnt=0;
        for(auto it:st1){
            if(st2.find(it)!=st2.end())cnt++;
        }
        cout<<ans-cnt<<endl;
    }
    return 0;
}