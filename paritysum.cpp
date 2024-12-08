#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>arr(n);
        ll cnteven=0;
        ll cntodd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)cnteven++;
            else cntodd++;
        }
        if(cnteven==n||cntodd==n){
            cout<<0<<endl;
            
        }
        else{
            ll cnt=0;
            ll s=-1;
            vector<ll>even;
            for(ll i=0;i<n;i++){
                if(arr[i]%2==0)even.push_back(arr[i]);
                else if(arr[i]>s)s=arr[i];
            }
            sort(even.begin(),even.end());
            ll ans=even.size();
            for(auto it:even){
                if(it<s){
                    s+=it;
                }else{
                    ans+=1;
                    break;
                } 
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}