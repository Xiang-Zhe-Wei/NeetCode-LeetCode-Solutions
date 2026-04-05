class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string str : strs){
            res += to_string(str.length()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int len = stoi(s.substr(i, j));
            i = j + 1;
            j = i + len;
            res.push_back(s.substr(i, len));
            i = j;
        }
        return res;
    }

};
// 5#Hello6#avccds
// Time:O(m), Space:O(mn)
// m = nums of strs, n = char num of each str