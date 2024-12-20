#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll cost=0;
        ll mini=min(x,y);
        ll maxi=max(x,y);
        if(2*a<b){
            cost=(x+y)*a;
        }else{
            cost+=(mini*b);
            maxi-=mini;
            cost=cost+(maxi*a);
        }
        cout<<cost<<endl;
    }
    return 0;
}