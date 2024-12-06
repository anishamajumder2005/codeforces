#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool possible(ll n,ll m){
    if(n==m)return true;
    if(n%3!=0)return false;
    return (possible(n/3,m)||possible(2*n/3,m));
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        if(possible(a,b))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return  0;
}