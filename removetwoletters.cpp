#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<string>st;
        ll ans=n-1;
        for(ll i=1;i<n-1;i+=1){
            //taking chars from 0 to i and i+2 till end
            /*string s1=s.substr(0,i)+s.substr(i+2);
            st.insert(s1);*/
            if(s[i-1]==s[i+1])ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}