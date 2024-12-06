#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        int n=str1.size();
        int m=str2.size();
        int commonpref=0;
        for(int i=0;i<min(n,m)+1;i++){
            if(str1.substr(0,i)==str2.substr(0,i)){
                commonpref=i;
            }
        }
        cout<<(n+m)-max(commonpref,1)+1<<endl;
    }
    return 0;
}