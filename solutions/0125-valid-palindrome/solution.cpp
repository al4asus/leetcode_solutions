class Solution {
public:
    bool isPalindrome(string s) {
        int sol = 0;
        int sag = s.length() - 1;

        while (sol < sag){
            if(!((s[sol] >= 'a' && s[sol] <= 'z') || (s[sol] >= 'A' && s[sol] <= 'Z') || (s[sol] >= '0' && s[sol] <= '9'))){
                sol++;
                continue;
            }
            if(!((s[sag] >= 'a' && s[sag] <= 'z') || (s[sag] >= 'A' && s[sag] <= 'Z') || (s[sag] >= '0' && s[sag] <= '9'))){
                sag--;
                continue;
            }
            char solKarakter = s[sol];
            char sagKarakter = s[sag];

            if(solKarakter >= 'A' && solKarakter <= 'Z') solKarakter += 32;
            if(sagKarakter >= 'A' && sagKarakter <= 'Z') sagKarakter += 32;

            if(solKarakter != sagKarakter){
                return false;
            }

            sol++;
            sag--;
        }
        return true;
    }
};
