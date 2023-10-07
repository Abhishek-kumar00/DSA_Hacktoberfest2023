class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int temp[n + m];

        // Copy elements from nums1 and nums2 to temp
        int i = 0, j = 0, k = 0;
        // while (i < n && j < m) {
        //     if (nums1[i] < nums2[j]) {
        //         temp[k++] = nums1[i++];
        //     } else {
        //         temp[k++] = nums2[j++];
        //     }
        // }

        while (i < n) {
            temp[k++] = nums1[i++];
        }

        while (j < m) {
            temp[k++] = nums2[j++];
        }
        sort(temp,temp+n+m);

        // Calculate the median
        int mid = (n + m) / 2;
        int start = temp[0];
        int end = temp[n + m - 1];

        if ((n + m) % 2 == 0) {
            // If the total number of elements is even
            return (double)(temp[mid - 1] + temp[mid]) / 2.0;
        } else {
            // If the total number of elements is odd
            return (double)temp[mid];
        }
    }
};
