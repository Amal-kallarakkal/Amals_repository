#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countLessThanEqualToK(nums, k) - countLessThanEqualToK(nums, k - 1);
    }

    int countLessThanEqualToK(vector<int>& nums, int k) {
        int i = 0; 
        int count = 0; 
        int oddCount = 0; 
        
        for (int j = 0; j < nums.size(); ++j) { // Right pointer of the sliding window
            if (nums[j] % 2 == 1) // Check if the current element is odd
                oddCount++; // Increment the odd count
            
            // While the number of odd elements exceeds 'k', move the left pointer to the right
            while (oddCount > k) {
                if (nums[i] % 2 == 1) // Check if the element at the left pointer is odd
                    oddCount--; // Decrement the odd count
                i++; // Move the left pointer to the right
            } 
            cout<<count<<endl;
            count += j - i + 1; // Add the number of valid subarrays ending at 'j'
        }
        
        return count; // Return the total count of subarrays with at most 'k' odd numbers
    }
};