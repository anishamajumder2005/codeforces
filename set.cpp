#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll sum=(r/k);
        sum=sum-l+1;
        ll mini=0;
        cout<<max(sum,mini)<<endl;
    }
    return 0;
}