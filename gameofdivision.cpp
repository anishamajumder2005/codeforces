#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
         ll n,k;
         cin>>n>>k;
         vector<vector<ll>>a(k);
         for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            a[x%k].push_back(i);
         }
         ll res=-1;
         for(ll i=0;i<k;i++){
            if(a[i].size()==1){
                res=a[i][0];
                break;
            }
         }
         if(res==-1)cout<<"NO"<<endl;
         else{
            cout<<"YES"<<endl;
            cout<<res<<endl;
         }
    }
    return 0;
}