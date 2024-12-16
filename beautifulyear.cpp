#include<bits/stdc++.h>
using namespace std;
bool distinct(int n){
    string yr=to_string(n);
    set<int>st;
    for(auto it:yr){
        st.insert(it-'0');
    }
    return st.size()==yr.size();
}
int main(){
    int n;
    cin>>n;
    int strt=n+1;
    while(!distinct(strt))strt+=1;
    cout<<strt<<endl;
    return 0;
}