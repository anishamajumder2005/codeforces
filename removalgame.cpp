#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        vector<ll>a(x),b(x);
        for(ll i=0;i<x;i++)cin>>a[i];
        for(ll i=0;i<x;i++)cin>>b[i];
        while(true){
            if(a==b){
                cout<<"Bob"<<endl;
                break;
            }
            reverse(a.begin(),a.end());
            if(a==b){
                cout<<"Bob"<<endl;
                break;
            }
            else {
                cout<<"Alice"<<endl;
                break;
            }
        }

    }
    return 0;
}