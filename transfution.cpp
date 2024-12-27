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
        ll odd=0,even=0;
        ll oddcnt=0;
        ll evencnt=0;
        for(ll i=0;i<n;i++){
            if(i%2==0)odd+=arr[i],oddcnt++;
            else even+=arr[i],evencnt++;
        }
        // to make all elements equal , odd/oddcnt==even/evencnt and also odd%oddcnt==0
        if(odd%oddcnt!=0||even%evencnt!=0||odd/oddcnt!=even/evencnt)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}