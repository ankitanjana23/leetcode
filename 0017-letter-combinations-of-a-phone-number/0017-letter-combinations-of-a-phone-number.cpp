class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()<=0)return ans;
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapping);
        return ans;
    }

    private:
    void solve(string digits,vector<string>&ans,string output,int index,string mapping[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string value=mapping[number];
        for(int j=0;j<value.size();j++){
            output.push_back(value[j]);
        solve(digits,ans,output,index+1,mapping);
        output.pop_back();
        }
    }

};