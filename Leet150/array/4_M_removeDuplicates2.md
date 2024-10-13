Function to remove duplicates from a sorted array where each element can appear at most twice.
The function modifies the array such that each unique element appears at most twice, and returns the new length.
The array is sorted, so duplicates are adjacent, making it easy to handle them in one pass.

Time Complexity: O(n)
- I traverse the array once, where n is the number of elements in the array.

Space Complexity: O(1)
- The algorithm uses constant extra space as we modify the input array in place.

Parameters:
- nums - A sorted vector of integers that may contain duplicates, where each element can appear at most twice.

Approach:
- If the size of nums is less than or equal to 2, I return the size as all elements can be retained.
- I maintain a pointer `k` which keeps track of the position of the last valid element.
- Starting from index 2, I iterate through the array and check if the current element is different from the element at `nums[k-2]` (ensuring no more than two duplicates).
- If it is different, I place it at position `k` and increment `k`.
- At the end, the first `k` elements of the array will contain valid elements with no more than two occurrences of any value.

```cpp
int removeDuplicates(vector<int>& nums) {
    // If the array has 2 or fewer elements, no need to process further
    if(nums.size() <= 2) return nums.size();

    // k points to the position where the next valid element will be placed
    int k = 2;

    // Start checking from the third element (index 2)
    for(int i = 2; i < nums.size(); i++) {
        // If the current element is not a duplicate of nums[k-2], it can be placed at nums[k]
        if(nums[i] != nums[k-2]) {
            nums[k] = nums[i];
            k++;  // Move 'k' to the next position
        }
    }
    // Return the new length of the array with no more than two occurrences of each element
    return k;
}
