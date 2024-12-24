#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];
        ll sum=0;
        for(ll i=0;i<=n-1;i++){
            if(a[i]-b[i+1]>0)sum+=(a[i]-b[i+1]);
        }
        sum+=a[n-1];
        cout<<sum<<endl;
    }
    return 0;
}