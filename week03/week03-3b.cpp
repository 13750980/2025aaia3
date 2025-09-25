// week03-3b.cpp 二合一 把不是 0 的找出來,暫放 ans, 再放回去
// LeetCode Q6: 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // 直接移動 nums[k] = nums[i], 再 k++
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
