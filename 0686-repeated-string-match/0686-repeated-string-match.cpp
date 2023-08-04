class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.size();
        int m = b.size();
        
        string repeated_a = "";
        int repetitions = 0;
        
        while (repeated_a.size() < m) {
            repeated_a += a;
            repetitions++;
        }
        
        if (repeated_a.find(b) != string::npos) {
            return repetitions;
        }
        
        // Try repeating one more time
        repeated_a += a;
        repetitions++;
        
        if (repeated_a.find(b) != string::npos) {
            return repetitions;
        }
        
        return -1;
    }
};
