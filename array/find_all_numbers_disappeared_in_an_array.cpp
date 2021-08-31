class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
       map<int,int>mp;
        for(int i=0;i<v.size();i++) mp[v[i]]++;
        vector<int>vec;
       for(int i=1;i<=v.size();i++){
           if(mp.find(i)==mp.end()) vec.push_back(i);
       }
        return vec;
    }
};
