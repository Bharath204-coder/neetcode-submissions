class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>seen(26,0);
        for(char c:s){
            seen[c-'a']++;
        }
        for(char c:t){
            seen[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(seen[i]!=0)
            return false;
        }
        return true;
    }
};
