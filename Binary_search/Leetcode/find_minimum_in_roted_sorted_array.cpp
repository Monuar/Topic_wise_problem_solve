class Solution {
public:
    int findMin(vector<int>&a) {
        long long l=0,r=a.size()-1;
       // if(a[l]<a[r]|| a.size()==1) return a[0];
        long long cnt=0;
        while(l<=r)
             {
                int mid=l+(r-l)/2;
                if(mid<r){
                    if(a[mid+1]<a[mid]){
                    cnt=mid+1;
                    break;
                    }
                }
                 if(l<mid){
                     if(a[mid-1]>a[mid]){
                    cnt=mid;
                    break;
                     }
                    }
             if(a[mid]<a[r]) r=mid-1;
                else l=mid+1;

          }
         return a[cnt];
    }
};
