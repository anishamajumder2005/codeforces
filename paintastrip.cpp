#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(ll a,ll x){
     return a >= (2 * x) + 1 && a <= 2 * ((2 * x) + 1);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
            ll ans=1;
            for(ll i=1; ; i=i*2+2){
                if(i>=a){
                    cout<<ans<<endl;
                    break;
                }
                ans++;
            }
    }
    return 0;
}
