  static bool comp(string &s1,string &s2){
        return s1.size()<s2.size();
  }
  bool check(string &s1,string&s2){
      int n=s1.size();
      int m=s2.size();
      if(n!=m+1)return false;
      int i=0,j=0;
      while(i<n){
          if(s1[i]==s2[j])i++,j++;
          else i++;
      }
      return (i==n&&j==m);
  }
    int longestChain(int n, vector<string>& words) {
        // Code here
        sort(words.begin(),words.end(),comp);
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(check(words[i],words[j])==true&&1+dp[j]>dp[i])dp[i]=1+dp[j];
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
