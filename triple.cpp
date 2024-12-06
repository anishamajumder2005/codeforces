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
        unordered_map<ll,int>mp;
        for(auto it:a)mp[it]++;
        ll maxi=LLONG_MIN;
        for(auto it:mp){
            maxi=max(maxi,(ll)it.second);
        }
        if(maxi<3)cout<<-1<<endl;
        else if(maxi>=3){
            for(auto it:a){
                if(mp[it]==maxi){
                    cout<<it<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}