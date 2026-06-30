class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())    return false;
        unordered_map<char,int> mp;

        for(auto num: s){
            mp[num]++;
        }

        for(auto ch : t){
            if(mp.find(ch) != mp.end()){
                mp[ch]--;
                if(mp[ch] < 0)  return false;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
