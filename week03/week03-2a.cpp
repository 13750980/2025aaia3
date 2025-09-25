// week03-2a.cpp 
// LeetCode Q8: 1822. Sign of the Product of an Array
// р皚癬ㄓ, 琌タ计┪璽计, ┪ 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //  0 或常琌 0 , Τ 1 或碞单或
        for(int i=0; i<nums.size(); i++){ // Τ碭计, 癹伴禲碭Ω
            ans *= nums[i];// –Ωр nums[i]  ans 柑
        } // 计禫禫, 1000计, 碞脄, ┮祘ΑΤ粇...
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
