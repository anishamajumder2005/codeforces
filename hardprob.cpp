#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll row1=min(m,a);
        ll row2=min(m,b);
        ll rem=(2*m)-(row1+row2);
        ll rowc=min(rem,c);
        ll totalseats=row1+row2+rowc;
        cout<<totalseats<<endl;
    }
    return 0;
}