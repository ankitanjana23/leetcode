class Solution {
public:
    string reverseVowels(string s) {
       //we can solve this problem by using two pointer approch
       int left =0;
       int right = s.size()-1;
       while(left<right){
           char x = s[left];
           char x2 = s[right];
           int term1 = 0;
           int term2 =0;
           
          if( x == 'a' || x == 'e' || x=='i' || x == 'o' || x == 'u' ||
              x == 'A' || x == 'E' || x=='I' || x == 'O' || x == 'U' ) term1 = 1;
          if( x2 == 'a' || x2 == 'e' || x2=='i' || x2 == 'o' || x2 == 'u' ||
              x2 == 'A' || x2 == 'E' || x2=='I' || x2 == 'O' || x2 == 'U' ) term2 = 1;
          
          if(term1 && term2) {
              swap(s[left] , s[right]);
              left++; right--;
          }
          if(!term1) left++;
          if(!term2) right--;
          
       }
       return s;
    }
};