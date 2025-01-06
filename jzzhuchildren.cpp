#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m;
    cin>>n>>m;
    queue<pair<ll,ll>>q;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        q.push({i,x});
    }
    ll lst=-1;
    while(!q.empty()){
        ll curridx=q.front().first;
        ll rem=q.front().second;
        q.pop();
        if(rem>m)q.push({curridx,rem-m});
        else lst=curridx;
    }
    cout<<lst<<endl;
    return 0;
}