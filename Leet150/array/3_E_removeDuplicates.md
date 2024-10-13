/**
 * Function to remove duplicates from a sorted array in-place.
 * The function modifies the array such that each unique element appears only once, and returns the new length.
 * The array is sorted, so duplicates are adjacent, making it easy to remove them in one pass.
 *
 * Time Complexity: O(n)
 *    - We traverse the array once, where n is the number of elements in the array.
 * 
 * Space Complexity: O(1)
 *    - The algorithm uses constant extra space as we only modify the input array in place.
 *
 * Parameters:
 *    nums - A sorted vector of integers that may contain duplicates.
 * 
 * Approach:
 *    - We use two pointers: 
 *       - 'i' keeps track of the position of the last unique element found.
 *       - 'j' iterates through the array to find the next unique element.
 *    - If nums[j] is different from nums[i], we increment 'i' and copy nums[j] to nums[i].
 *    - By the end, the first 'i+1' elements of the array will contain unique elements.
 */

```cpp
int removeDuplicates(vector<int>& nums) {
    // Edge case: if the array is empty, return 0
    if(nums.empty()) return 0;

    // i points to the last unique element found
    int i = 0;

    // j starts from the second element and scans the array
    for(int j = 1; j < nums.size(); j++) {
        // If nums[i] (last unique) is different from nums[j], we found a new unique element
        if(nums[i] != nums[j]) {
            i++;  // Move 'i' forward to the next position for the unique element
            nums[i] = nums[j];  // Copy the unique element found at nums[j] to nums[i]
        }
    }
    // Return the length of the array with unique elements
    return i + 1;
}
