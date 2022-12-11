class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int count = 1, previous = 1;

        for(int i = 0; i < nums.size()-1; i++) {

            if(nums[i] < nums[i+1]) 
                count++;
            else {
                if(count > previous)
                    previous = count;
                count = 1;
            }
        }
        
        if(count > previous)
            previous = count;

        return previous;

    }
};