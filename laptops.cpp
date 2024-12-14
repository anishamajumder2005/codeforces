#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    vector<pair<ll,ll>>v(t);
    for(ll i=0;i<t;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    bool happy=false;
    for(int i=1;i<t;i++){
        if(v[i-1].second>v[i].second){
            happy=true;
            break;
        }
        //else happy=false;
    }
    if(happy)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}