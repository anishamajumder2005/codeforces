#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,a;
        cin>>s>>a;
        ll n=s.size();
        ll m=a.size();
        ll idx=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='?'){
                if(idx<m){
                    s[i]=a[idx];
                    idx++;
                }else s[i]='z';
            }else if(s[i]==a[idx])idx++;
        }
        if(idx>=m){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}