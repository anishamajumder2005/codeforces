#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=3){
            cout<<1<<endl;
            continue;
        }
        ll ans=1;
        while(n>3){
            n/=4;
            ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}