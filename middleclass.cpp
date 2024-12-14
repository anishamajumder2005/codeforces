#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        ll sum=0;
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++){
            sum+=a[i];
        }
        ll avg=0;
        ll i=0;
        while(n>0){
            avg=sum/n;
            if(avg>=k)break;
            sum-=a[i];
            n--;
            i++;
        }
        cout<<n<<endl;
    }
    return 0;
}