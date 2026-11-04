#include<bits/stdc++.h>
using namespace std;
class Optimal {
    public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> answer;  // Store final triplets
        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix the first element
        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate values of i
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            // j must always be less than k
            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (sum > 0) {
                    k--;  // Sum is too large, decrease it
                }
                else if (sum < 0) {
                    j++;  // Sum is too small, increase it
                }
                else {
                    // Sum is exactly zero, so store the triplet
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    answer.push_back(temp);

                    j++;  // Move j forward to find more triplets
                    k--;  // Move k backward to find more triplets

                    // Skip duplicate values of j
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }

                    // Skip duplicate values of k
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }

        return answer;
    }
    
};