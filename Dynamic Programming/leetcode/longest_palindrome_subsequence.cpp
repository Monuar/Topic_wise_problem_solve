class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        int lps[n][n];
        for(int i=0;i<n;i++){
            lps[i][i]=1;
        }
        for(int cl=2;cl<=n;cl++){
            for(int i=0;i<n-cl+1;i++){
                int j=i+cl-1;
                if(s[i]==s[j]&&cl==2){
                    lps[i][j]=2;
                }
                else if(s[i]==s[j]){
                    lps[i][j]=lps[i+1][j-1]+2;
                }
                else{
                    lps[i][j]=max(lps[i+1][j],lps[i][j-1]);
                }
            }
        }
        return lps[0][n-1];

    }
};
