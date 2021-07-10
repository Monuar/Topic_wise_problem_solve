class Solution {
public:
    int countConsistentStrings(string s, vector<string>& v) {
        int cnt=v.size();
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<v.size();i++){
            for( auto c:v[i]){
                if(mp.find(c)==mp.end()){
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};
