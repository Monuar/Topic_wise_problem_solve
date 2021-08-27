class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char c) {

        int l=0,r=v.size()-1;
        char ch;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]>c){
                ch=v[mid];
                r=mid-1;
            }
            else l=mid+1;
        }
        if(l==v.size()) return v[0];
        else return ch;
    }
};

