#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s=to_string(n);
        if(s.find('33')==string::npos&&n>=33){
            while(n>0){
                n-=33;
            }
            if(n==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(n%33==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}