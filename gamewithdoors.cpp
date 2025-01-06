#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        ll maxi=min(r1,r2);
        ll mini=max(l1,l2);
        ll sz=maxi-mini+1;
        ll ans=sz-1;
        if(sz<=0){
            cout<<1<<endl;
            continue;
        }
        
        ans+=l1!=l2;
        ans+=(r1!=r2);
        
        cout<<ans<<endl;
    }
    return 0;
}