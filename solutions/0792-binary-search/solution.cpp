class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sol = 0;
        int sag = nums.size() - 1;

        while (sol <= sag){
            int mid = sol + (sag - sol) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                sol = mid + 1;
            }
            else{
                sag = mid - 1;
            }

        }
        return -1;
        
    }
};
