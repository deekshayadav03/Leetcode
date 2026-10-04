class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // MERGE AND SORT APPROACH
        // nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        // sort(nums1.begin(), nums1.end());
        //  int n = nums.size();
        //   int mid= n/2;
        //    double sum;
        // if(n%2!=0){ ;
        // sum= nums[mid];
        // }
        // else {
        //  sum= (double)(nums[mid]+nums[mid-1])/2;
        // }
        // return sum;


        //TWO POINTER APPROACH
    //     int i =0; int j=0;
    //     vector<int> nums;
    //     while(i<nums1.size()&&j<nums2.size()){
    //         if(nums1[i]<=nums2[j]){
    //             nums.push_back(nums1[i]);
    //             i++;
    //         }
    //         else {
    //             nums.push_back(nums2[j]);
    //             j++;
    //         }
    //     }
    //     while (i<nums1.size()){
    //      nums.push_back(nums1[i]);
    //      i++;
    //     }
    //    while (j<nums2.size()){
    //       nums.push_back(nums2[j]);
    //      j++;
    //     }
    //     int n = nums.size();
    //       int mid= n/2;
    //        double sum;
    //     if(n%2!=0){ ;
    //     sum= nums[mid];
    //     }
    //     else {
    //      sum= (double)(nums[mid]+nums[mid-1])/2;
    //     }
    //     return sum;

   // BINARY SEARCH APPROACH
   if (nums1.size() > nums2.size())
       return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (m + n + 1) / 2 - cut1;
            int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int r1 = (cut1 == m) ? INT_MAX : nums1[cut1];
            int r2 = (cut2 == n) ? INT_MAX : nums2[cut2];
            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                return max(l1, l2);
            }
            else if (l1 > r2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
       return 0.0;
    }
};