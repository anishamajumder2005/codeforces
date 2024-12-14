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
        ll cnt=0;
        ll rightm=LLONG_MAX;
        for(ll i=n-1;i>=0;i--){
            if(a[i]>rightm)cnt++;
            rightm=min(rightm,a[i]);
        }
        cout<<cnt<<endl;
    }
    return 0;
}