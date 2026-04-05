class Solution {
public:

    string encode(vector<string>& strs) {
        string content;
        // for(auto & x:strs){
        //     content += x;
        // } 
        for(int i=0; i<strs.size(); ++i){
            content += strs[i];
            content += "{";
        }
        return content;
    }

    vector<string> decode(string s) {
        vector<string> res;
        
        string tmp;
        for(int i=0; i<s.length(); i++){
            tmp += s[i];
            if(s[i] == '{'){
                res.push_back(tmp.substr(0, tmp.length()-1));
                tmp = "";
            }
        }
        return res;
    }
};
