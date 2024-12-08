#include<bits/stdc++.h>
#include<./string>
using namespace std;
string maxtime(string &s){
    int n=s.size();
    unordered_set<char>st;
    for(auto it:s){
        st.insert(it);
    }
    char max_char='a';
    for(char ch='a';ch<='z';ch++){
        if(st.find(ch)==st.end()){
            max_char=ch;
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            s.insert(s.begin()+i,max_char);
            return s;
        }
    }
    for(int i=0;i<n;i++){
        if(max_char>s[i]){
            s.insert(s.begin()+i,max_char);
            return s;
        }
    }
    s.push_back(max_char);
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t!=0){
        string s;
        cin>>s;
        cout<<maxtime(s)<<endl;
        t--;
    }
    return 0;
}