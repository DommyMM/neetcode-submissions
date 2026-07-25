class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        for (int num:nums){
            if(num == 1){
                count++;
                sum = max(sum, count);
            } else{
                count = 0;
            }
        }
        return sum;
    }
};