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
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        ll sum=0;
        ll coins=LLONG_MAX;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<=k)coins=min(coins,k-sum);
            else break;
            
            

        }
        //coins=min(coins,k-sum);
        //if(coins!=LLONG_MAX)coins=min(coins,k-sum);
        //if(coins==LLONG_MAX)coins=0;
        cout<<coins<<endl;
        
    }
    return 0;
}