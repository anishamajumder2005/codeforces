#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    char c;
    string s;
    cin>>c>>s;
    vector<string>v={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    if(c=='L'){
        for(int i=0;i<s.size();i++){
            for(auto it:v){
                if(it.find(s[i])!=string::npos){
                    int pos=it.find(s[i]);
                    s[i]=it[pos+1];
                }
            }
        }
    }
    if(c=='R'){
        for(int i=0;i<s.size();i++){
            for(auto it:v){
                if(it.find(s[i])!=string::npos){
                    int pos=it.find(s[i]);
                    s[i]=it[pos-1];
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}