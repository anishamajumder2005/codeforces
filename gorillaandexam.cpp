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
        vector<ll>freq={1};
        sort(arr.begin(),arr.end());
        for(ll i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                freq.back()++;
            }else freq.emplace_back(1);
        }
        sort(freq.begin(),freq.end());
        bool fl=false;
        for(ll i=0;i<freq.size();i++){
            if(freq[i]>k){
                cout<<freq.size()-i<<endl;
                fl=true;
                break;
            }
            k-=freq[i];
        }
        if(!fl)cout<<1<<endl;
        //cout<<freq.size()<<endl;
    }
    return 0;
}