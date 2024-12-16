#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1)cout<<"NO"<<endl;
        else{
            ll x=a;
            ll y=a*b;
            ll z=x+y;
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}