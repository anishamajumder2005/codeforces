#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='p')s[i]='q';
            else if(s[i]=='q')s[i]='p';
            else if(s[i]=='w')s[i]='w';
        }
        cout<<s<<endl;
    }
    return 0;
}