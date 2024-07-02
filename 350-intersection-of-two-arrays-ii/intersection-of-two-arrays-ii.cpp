#pragma GCC optimize("OFast")
class Solution {
public:
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    // vector<int> maping(vector<int> &nums1, vector<int> &nums2) {
    //     vector<int> ans;
    //     unordered_map<int, int> mp;

    //     for(int i = 0; i < nums1.size(); i++) mp[nums1[i]]++;
    //     for(int i = 0; i < nums2.size(); i++) {
    //         if(mp.count(nums2[i])) {
    //             ans.push_back(nums2[i]);
    //             mp[nums2[i]]--;
    //             if(mp[nums2[i]] == 0) mp.erase(nums2[i]);
    //         }
    //     }
    //     return ans;
    // }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums1.size(); i++) mp[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++) {
            if(mp[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans;
    }
};