#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>earns(k,0);
        for(ll i=0;i<k;i++){
            ll a,b;
            cin>>a>>b;
            earns[a-1]+=b;
        }
        sort(earns.rbegin(),earns.rend());
        //ll cnt=0;
        ll money=0;
        for(ll i=0;i<min(n,k);i++){
            money+=earns[i];
        }
        cout<<money<<endl;
    }
    return 0;
}