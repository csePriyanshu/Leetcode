/**
 * Function to merge two sorted arrays nums1 and nums2 into nums1 in a sorted manner.
 * nums1 has enough space at the end to accommodate elements from nums2.
 *
 * Time Complexity: O(m + n) 
 *    - We iterate through both arrays once, hence linear time in terms of m and n.
 * 
 * Space Complexity: O(1)
 *    - In-place merging, no additional space required apart from input arrays.
 *
 * Parameters:
 *    nums1 - First sorted array (has enough space at the end to hold nums2).
 *    m     - Number of valid elements in nums1 (ignoring trailing zeros).
 *    nums2 - Second sorted array.
 *    n     - Number of elements in nums2.
 * 
 * Approach:
 *    - We start from the end of both arrays (nums1 and nums2) and compare elements.
 *    - We place the larger of the two compared elements at the end of nums1 and move the corresponding pointer.
 *    - This approach ensures that nums1 remains sorted as we place elements from the back.
 *    - If nums2 is exhausted, nums1 is already in place. If nums1 is exhausted, we copy the remaining elements of nums2.
 */

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // If nums2 is empty, no merging needed
    if(n == 0) return;

    // p1 is the pointer for nums1, starting at the last valid element (m-1)
    // p2 is the pointer for nums2, starting at the last element (n-1)
    // right is the pointer for the position where we will place the next largest element in nums1
    int p1 = m - 1, p2 = n - 1, right = nums1.size() - 1;

    // Iterate while there are elements in nums2 to be placed
    while(p2 >= 0) {
        // If p1 is valid (>=0) and nums1's element is larger, place nums1[p1] at 'right'
        if(p1 >= 0 && nums1[p1] > nums2[p2]) {
            nums1[right] = nums1[p1];
            p1--;  // Move p1 left (to the next element to compare)
        } else {
            // Otherwise, place nums2[p2] at 'right'
            nums1[right] = nums2[p2];
            p2--;  // Move p2 left (to the next element in nums2)
        }
        right--;  // Move the 'right' pointer left to the next position
    }
}
