class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int len = nums.size();
        if(len < 3 || nums[0] > 0 || nums[len - 1] < 0) return result;
        
        for(int i = 0; i < len; i++){
            if(nums[i] >= 0){
                if(i+2 < len && nums[i+1] == 0 && nums[i+2] == 0){
                    result.push_back({0, 0, 0});
                }
                break;
            }
            int j = i + 1, k = len - 1, n = 0;
            while(j < k){
                if(nums[k] <= 0) break;
                n = nums[j] + nums[k];
                if(n == -nums[i]){
                    result.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(k > j && nums[k] == nums[k-1]) k--;
                    j++; k--;
                }
                else if(n < -nums[i]){
                    while(j < k && nums[j] == nums[j+1]) j++;
                    j++;
                }
                else{
                    while(k > j && nums[k] == nums[k-1]) k--;
                    k--;
                } 
            }
            while(i < len-1 && nums[i] == nums[i+1]) i++;
        }
        return result;
    }
};