#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int chicken=0;
    int cow=0;
    while(n>=2){
        if(n%4==0){
            return (n/4);
        }
        if(n>4){
            cow+=1;
            n-=4;
        }
        
        else{
            chicken+=1;
            n-=2;
        }
    }
    return cow+chicken;
}
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        cout<<func(n)<<endl;
        t--;
    }
    return 0;
}