#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        /*m=2,k=1;
        int a,b,c;
        cin>>a>>b>>c;
        ll mini=min(a,b);
        ll maxi=max(a,b);
        if(c>maxi){
            cout<<n-maxi<<endl;
        }
        else if(c<mini){
            cout<<mini-1<<endl;
        }else if(c<maxi&&c>mini){
            cout<<(maxi-mini)/2<<endl;
        }*/
       vector<int>a(m);
       for(ll i=0;i<m;i++)cin>>a[i];
       sort(a.begin(),a.end());
       for(ll i=0;i<k;i++){
            ll q;
            cin>>q;
            ll it=upper_bound(a.begin(),a.end(),q)-a.begin();
            if(it==0)cout<<a[0]-1<<endl;
            else if(it==m)cout<<n-a[it-1]<<endl;
            else cout<<(a[it]-a[it-1])/2<<endl;
       }
    }
    return 0;
}