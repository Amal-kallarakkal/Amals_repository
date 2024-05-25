class Solution {
public:

    void solve(int idx, string &s,  map<string, int> &mp, vector<string> &ans, string output) {
        
        if(idx >= s.size()) {
            output.pop_back();
            ans.push_back(output);
            return;
        }

        string k = "";

        for(int i = idx; i < s.size(); i++) {
            k += s[i];
            if(mp[k]) {
                solve(i + 1, s, mp, ans, output + k + " ");
            }
        }

    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        map<string, int> mp;
        for(auto x: wordDict) {
            mp[x]++;
        }
        
        solve(0, s, mp, ans, "");
        
        return ans;
    }
};