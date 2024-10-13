Function to merge two sorted arrays nums1 and nums2 into nums1 in a sorted manner.
nums1 has enough space at the end to accommodate elements from nums2.

Time Complexity: O(m + n)
- I traverse both arrays once, where m and n are the lengths of nums1 and nums2, respectively.

Space Complexity: O(1)
- The algorithm uses constant extra space as merging is done in-place.

Parameters:
- nums1 - First sorted array (has enough space at the end to hold nums2).
- m - Number of valid elements in nums1 (ignoring trailing zeros).
- nums2 - Second sorted array.
- n - Number of elements in nums2.

Approach:
- I use three pointers:
  - p1 starts at the end of the valid elements of nums1 (m-1).
  - p2 starts at the end of nums2 (n-1).
  - right starts at the last index of nums1 and moves backwards.
- I compare elements from the back of both arrays and place the larger one in the correct position at 'right'.
- The process continues until nums2 is exhausted. If nums1 is exhausted earlier, the remaining elements of nums2 are placed in nums1.
- This ensures that nums1 remains sorted after merging.

```cpp
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Edge case: if nums2 is empty, no merging is needed
    if(n == 0) return;

    // p1 points to the last valid element in nums1
    // p2 points to the last element in nums2
    // right points to the last position in nums1 to place the next largest element
    int p1 = m - 1, p2 = n - 1, right = nums1.size() - 1;

    // While there are still elements in nums2 to be merged
    while(p2 >= 0) {
        // If p1 is valid and nums1[p1] is larger, place nums1[p1] at the 'right' position
        if(p1 >= 0 && nums1[p1] > nums2[p2]) {
            nums1[right] = nums1[p1];
            p1--;  // Move p1 left
        } else {
            // Otherwise, place nums2[p2] at the 'right' position
            nums1[right] = nums2[p2];
            p2--;  // Move p2 left
        }
        right--;  // Move the 'right' pointer left
    }
}
