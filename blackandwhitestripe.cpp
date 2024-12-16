#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll findmaxB(string &s){
    int maxcnt=0;
    int currcnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='B')currcnt++;
        else{
            maxcnt=max(maxcnt,currcnt);
            currcnt=0;
        }
    }
    maxcnt=max(maxcnt,currcnt);
    return maxcnt;
}
ll findB(string &s){
    ll cnt=0;
    for(auto it:s){
        if(it=='B')cnt++;
    }
    return cnt;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        /*ll len=findmaxB(s);
        ll cntB=findB(s);
        if(len>=k)cout<<0<<endl;
        else if(k==n)cout<<min(k-findB(s),k-len)<<endl;
        else cout<<k-len<<endl;*/
        vector<ll>prefsum(n+1);
        for(ll i=1;i<=n;i++){
            prefsum[i]=prefsum[i-1];
            if(s[i-1]=='W')prefsum[i]++;
        }
        ll ans=n;
        for(ll i=k;i<=n;i++){
            ans=min(ans,prefsum[i]-prefsum[i-k]);
        }
        cout<<ans<<endl;
    }
    return 0;
}