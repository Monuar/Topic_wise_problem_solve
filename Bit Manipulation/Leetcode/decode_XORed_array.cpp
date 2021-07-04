class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>pre(encoded.size()+1);
        pre[0]=first;
        for(int i=1;i<=encoded.size();i++){
            pre[i]=pre[i-1]^encoded[i-1];
        }
        return pre;
    }
};
