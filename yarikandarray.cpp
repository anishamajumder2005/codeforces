#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        ll maxsum=arr[0];
        ll currsum=arr[0];
        ll mini=min((ll)0,arr[0]);
        for(ll i=1;i<n;i++){
            if(abs(arr[i-1]%2)==abs(arr[i]%2)){
                mini=0;
                currsum=0;
            }
            currsum+=arr[i];
            maxsum=max(maxsum,currsum-mini);
            mini=min(mini,currsum);
        }
        cout<<maxsum<<endl;
    }
    return 0;
}