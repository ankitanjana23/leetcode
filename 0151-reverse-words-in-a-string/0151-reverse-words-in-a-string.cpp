class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string>st;
        string words;
        stringstream ss(s);
        while(ss>>words){
            st.push(words);
        }

        //only access 
        words ="";
        while(st.size()!=1){
            words += st.top() + " " ;
            st.pop();
        }
        words += st.top();
        return words;
    }
};