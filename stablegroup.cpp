#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    //ll cnt=0;
    sort(arr.begin(),arr.end());
    vector<ll>gaps;
    for(ll i=1;i<n;i++){
        if(arr[i]-arr[i-1]>x)gaps.push_back(arr[i]-arr[i-1]);
    }
    sort(gaps.begin(),gaps.end());
    ll ans=gaps.size()+1;
    for(auto it:gaps){
        if(k>=(it-1)/x){
            //placing as many students as possible to minimize number of groups
            k-=(it-1)/x;
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}