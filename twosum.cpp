class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<double, int> arr;
        
        int i = 0, j = nums.size();
        while(i < j) {
            pair<map<double, int>::iterator, bool> flag;
            double x = double(nums[i]);
            flag = arr.insert(pair<double, int>(x, i));
            if(flag.second == false) {
                arr.insert(pair<double, int>(x + 0.1, i));
            }
            i++;
        }
        
        vector<int> re;
        map<double, int>::iterator x = arr.begin();
        map<double, int>::reverse_iterator y = arr.rbegin(); 
        
        while(x != arr.end() && y != arr.rend()) {
            if (int(x->first) + int(y->first) < target) x++;
            if (int(x->first) + int(y->first) > target) y++;
            if(int(x->first) + int(y->first) == target) {
                re.insert(re.begin(), y->second);
                re.insert(re.begin(), x->second);
                break;
            }
        }
        
        return re;
    }
};