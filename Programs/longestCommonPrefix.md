Function to find the longest common prefix among a list of strings.
By sorting the list of strings, the longest common prefix can be easily found by comparing the first and last strings in the sorted order.
This works because in a sorted list, the strings with the least and greatest lexicographical order are likely to differ at the first point of variation.

Time Complexity: O(n * log n + m)
- Sorting the list takes O(n * log n), where n is the number of strings.
- After sorting, comparing the first and last strings takes O(m), where m is the length of the common prefix.

Space Complexity: O(1)
- The algorithm uses constant extra space aside from the input list and the result string.

Parameters:
- strs - A vector of strings for which the longest common prefix is to be found.

Approach:
- First, I sort the vector of strings, so that the lexicographically smallest string is at the beginning, and the largest is at the end.
- The longest common prefix is shared between the first and last strings in the sorted order.
- I iterate through the characters of both strings (the smallest and the largest) to find where they start to differ, and this forms the common prefix.
- The result is stored in `res` and printed at the end.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Vector of strings
    vector<string> strs{"cluster", "clue", "clutch", "club", "clumsy"};

    // Sort the strings lexicographically
    sort(strs.begin(), strs.end());

    // Get the number of strings in the vector
    int n = strs.size();

    // First and last strings in the sorted list
    string s1 = strs[0];        // Lexicographically smallest string
    string s2 = strs[n-1];      // Lexicographically largest string

    // Get the sizes of these two strings
    int size1 = s1.size();
    int size2 = s2.size();

    // Result string to store the common prefix
    string res = "";

    // Iterate through both strings to find the common prefix
    for(int i = 0; i < min(size1, size2); i++) {
        // If characters are the same, add to result
        if(s1[i] == s2[i]) {
            res.push_back(s1[i]);
        } else {
            break;  // Stop at the first mismatch
        }
    }

    // Output the longest common prefix
    cout << "Longest Common Prefix is : " << res << endl;

    return 0;
}
