class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>cnt;

        for(char c:s)
        {
            cnt[c]++;
        }
        for(char c:t)
        {
            cnt[c]--;
        }

        for(auto &p:cnt)
        {
            if(p.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};
