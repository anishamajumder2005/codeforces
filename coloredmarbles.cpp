#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        unordered_map<ll,ll>mp;
        for(auto it:a){
            mp[it]++;
        }
        ll one=0,not1=0;
        for(auto it:mp){
            if(it.second==1)one++;
            else not1++;
        }
        ll score=(one+1)/2;
        score*=2;
        score+=not1;
        cout<<score<<endl;
        
    }
    return 0;
}