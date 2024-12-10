#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll diff1=b-a;
        while(true){
            ll newc=a+2*diff1;
            if(newc%c==0&&newc>=c&&newc!=0){
                cout<<"YES"<<endl;
                break;
            }
            ll newa=(2*b)-c;
            if(newa%a==0&&newa>=a&&newa!=0){
                cout<<"YES"<<endl;
                break;
            }
            ll newb=a+((c-a)/2);
            if(newb%b==0&&newb>=b&&newb!=0&&(c-a)%2==0){
                cout<<"YES"<<endl;
                break;
            }else{

             cout<<"NO"<<endl;
             break;
            }
        }

    }
    return 0;
}