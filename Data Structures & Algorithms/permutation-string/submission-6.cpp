class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;


        vector<int> s1count(26, 0);
        vector<int> s2count(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }

        int mat = 0;
        for(int i=0; i<26; ++i){
            if(s1count[i] == s2count[i]) mat++;
        }

        int l=0;
        for(int i=s1.length(); i<s2.length(); ++i){
            if(mat == 26) return true;

            s2count[s2[i] - 'a']++;
            if(s1count[s2[i] - 'a'] == s2count[s2[i] - 'a']){
                mat++;
            }else if(s1count[s2[i] - 'a']+1 == s2count[s2[i] - 'a']){
                mat--;
            }

            int index = s2[l] - 'a';
            s2count[index]--;
            if (s1count[index] == s2count[index]) mat++;
            else if (s1count[index] - 1 == s2count[index]) mat--;

            l++;
        }
        return mat==26;

    }
};
