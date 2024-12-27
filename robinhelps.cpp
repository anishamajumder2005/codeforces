#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        ll sum=0;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(arr[i]>=k){
                sum+=arr[i];
                continue;
            }
            if(sum>0&&arr[i]==0){
                cnt++;
                sum-=1;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}