class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> combined;
        combined.reserve(nums1.size() + nums2.size());

        combined.insert(combined.end(), nums1.begin(), nums1.end());
        combined.insert(combined.end(), nums2.begin(), nums2.end());
        
        sort(combined.begin(), combined.end());

        int n = combined.size();
        if(n%2 == 1){
            return combined[n/2];
        }
        else{
            return (combined[n/2-1] + combined[n/2])/2.0;
        }

    }
};