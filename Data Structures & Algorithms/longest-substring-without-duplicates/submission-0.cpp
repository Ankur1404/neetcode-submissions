class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int left = 0;
        int right  = 0;
        int maxlen  = 0;
        while(right<s.length())
        {
            if(seen.count(s[right]))
            {
                seen.erase(s[left]);
                left++;
            }else{
                seen.insert(s[right]);
                right++;
                maxlen = max(maxlen,right-left);

            }

        }
        return maxlen;
    }
};
