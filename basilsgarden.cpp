#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isdecending(vector<ll>&arr){
    if(arr.size()==1)return true;
    ll i=0;
    while(i<arr.size()-1){
        if(arr[i]<arr[i+1])return false;
        i++;
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll t;
        cin>>t;
        vector<ll>a(t);
        for(ll i=0;i<t;i++)cin>>a[i];
        if(isdecending(a))cout<<a[0]<<endl;
        else{
            ll  ans=a[n-1];
            for(ll i=n-2;i>=0;i--){
                ans=max(ans+1,a[i]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}