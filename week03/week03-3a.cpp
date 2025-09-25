// week03-3a.cpp 二合一 把不是 0 的找出來,暫放 ans, 再放回去
// LeetCode Q6: 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // 用來放不是 0 的數
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) ans.push_back(nums[i]);
        }// 上面把不是 0 的數, 暫時放在 ans 裡, 等一下再塞回去
        // 再用 for 迴圈放回去
        for(int i=0; i<nums.size(); i++){
            if(i<ans.size()) nums[i] = ans[i];//塞回去
            else nums[i] = 0;//其他的放 0
        }
    }
};
