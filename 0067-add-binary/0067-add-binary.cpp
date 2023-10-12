class Solution {
public:
    string addBinary(string a, string b) {
       if(a.size()<b.size()) swap(a,b);
       string ans;
       int carry =0;
       int diff = a.size() - b.size();
       for(int i = b.size()-1;i>=0;i--){ // i == 2 only
          int add = (a[i+diff]-'0') + (b[i]-'0') + carry;
          if(add %2 == 0) ans += '0'; //even number 
          else ans += '1'; // another 
          if(add>=2) carry = 1;
          else carry = 0;
       }
       for(int i = diff-1 ; i>=0;i--){
           int add = (a[i]-'0') + carry ;
           if(add%2 == 0) ans += '0'; //even number 
           else ans += '1'; // another 
           if(add>=2) carry = 1;
           else carry = 0;
       }
       if(carry) ans += '1';
       reverse(ans.begin() , ans.end());
       return ans;
    }
};