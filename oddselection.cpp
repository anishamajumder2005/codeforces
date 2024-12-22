#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        ll odd=0;
        ll even=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
        }
        bool fl=false;
        for(ll i=1;i<=odd&&i<=x;i+=2){
            ll need=x-i;
            if(need<=even)fl=true;
        }
        if(fl)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}