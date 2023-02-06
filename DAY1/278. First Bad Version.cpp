// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low=1;
        unsigned int high=n;
        unsigned int mid;
        while(low<=high)
        { 
            mid=((low+high)/2);
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
             return mid;
            else if(isBadVersion(mid)==true)
               high=mid-1;
            else
               low=mid+1;  
        }
      return mid;
        
    }
};
