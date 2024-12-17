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
        ll prefsum=0,maxi=0,s=0;
        for(ll i=0;i<n;i++){
            prefsum=max(prefsum,a[i]);
            ll diff=prefsum-a[i];
            s+=diff;
            maxi=max(maxi,diff);
        }
        cout<<maxi+s<<endl;
    }
    return 0;
}