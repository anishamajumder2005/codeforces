#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll>freq(n+1,0);
        for(ll i=0;i<n;i++){
            if(a[i]<=n)freq[a[i]]++;
        }
        ll mex=0;
        for(ll i=0;i<=n;i++){
            if(freq[i]>1){
                if(i+x<=n)freq[i+x]+=freq[i]-1;
            }
            if(freq[i]==0){
                mex=i;
                break;
            }
        }
        cout<<mex<<endl;
    }
    return 0;
}