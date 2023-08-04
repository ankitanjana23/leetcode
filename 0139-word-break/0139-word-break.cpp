class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
         int n = s.size();
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
        // for convenience, s is 1-indexed
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for(int i = 1; i <= n; i ++) {
            string word;
            
            // because the length of a word is limited to at most 20
            // we only need to try the last substrings ending at i
            for(int j = i; j >= max(1, i - 20); j --) {
                word.insert(word.begin(), s[j - 1]);
                if(dict.count(word) && dp[j - 1]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};