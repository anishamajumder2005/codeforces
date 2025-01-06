#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int mod=1e9+7;
int main(){
    ll x,y,n;
    cin>>x>>y>>n;
    // f1=x, f2=y,f3=y-x,f4=-x,f5=-y,f6=x-y
    vector<ll>arr={x,y,y-x,-x,-y,x-y};
    ll ans=arr[(n-1)%6]%mod;
    ans+=mod;
    ans%=mod;
    cout<<ans<<endl;
}