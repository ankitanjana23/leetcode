class Solution {
public:
    int nextGreaterElement(int n) {
        string digits = to_string(n);
        next_permutation(digits.begin() , digits.end());
        int res = stoll(digits);
        return (res>INT_MAX || res<=n) ? -1:res;
    }
};