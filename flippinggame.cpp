#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    vector<ll>v(t);
    for(ll i=0;i<t;i++){
        cin>>v[i];
    }
    if(t==1){
        cout<<(v[0]==0)<<endl;
        return 0;
    }
    int iniones=0;
    for(auto it:v){
        if(it==1)iniones++;
    }
    if(iniones==t-1){
        cout<<t-1<<endl;
        return 0;
    }
    if(iniones==0){
        cout<<t<<endl;
        return 0;
    }
    int maxones=0;
    for(int i=0;i<t;i++){
        for(int j=i;j<t;j++){
            int currones=iniones;
            for(int k=i;k<=j;k++){
                if(v[k]==1)currones--;
                else currones++;
            }
            maxones=max(maxones,currones);
        }
    }
    cout<<maxones<<endl;
    return 0;
}