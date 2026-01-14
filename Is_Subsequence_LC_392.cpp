class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t
        
        // Traverse both strings
        while (i < s.length() && j < t.length()) {
            // If characters match, move s pointer forward
            if (s[i] == t[j]) {
                i++;
            }
            // Always move t pointer forward
            j++;
        }
        
        // Check if we found all characters of s
        return i == s.length();
    }
};
