class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        int result = 0;
        int n = s.length();

        //white space 
        while (i < n && s[i] == ' ') i++;

        // Step 2: Check for '+' or '-'
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Read in the digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Step 5: Check for integer overflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};