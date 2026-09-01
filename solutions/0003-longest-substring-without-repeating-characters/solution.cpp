class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool goruldu[256] = {false};

        int sol = 0;
        int sag = 0;
        int maxuzunluk = 0;

        while (sag < s.length()) {
            while(goruldu[s[sag]]){
                goruldu[s[sol]] = false;
                sol++;
            }
        goruldu[s[sag]]= true;  

        maxuzunluk = max(maxuzunluk, sag - sol + 1);

        sag++;
        }

    return maxuzunluk;   
    }
};
