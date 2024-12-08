#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll clicks=0;
    while(m>n){
        if(m%2==0){
            m/=2;
        }else m++;
        clicks++;
    }
    cout<<clicks+(n-m)<<endl;
    return 0;
}