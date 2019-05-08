#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
class Solution {
public:
    int maxArea(vector<int>& height) {
        int v = 0, i = 0, j = height.size() - 1;
        while(i < j) {
            v = MAX(v, MIN(height[i], height[j]) * (j - i));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return v;
    }
};