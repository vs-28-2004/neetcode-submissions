class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i <= j){
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }
            else if(!isalnum(s[i]) || s[i] == ' '){
                i++;
            }
            else if(!isalnum(s[j]) || s[j] == ' '){
                j--;
            }
            else {
                return false;;
            }
        }

        return true;
    }
};
