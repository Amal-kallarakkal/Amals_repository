#pragma GCC optimize("OFast")
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(int i = 0 ; i < logs.size(); i++) {
            if(logs[i] == "../") {
                if(cnt) cnt--;
            } 
            else if(logs[i] == "./") continue;
            else cnt++;            
        }

        return cnt;
    }
};