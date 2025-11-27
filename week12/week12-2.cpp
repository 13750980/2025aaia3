/// week12-2.cpp
/// LeetCode Programming Skills Math Q4: 976. Largest Perimeter Triangle
/// 找可構成三角形的三邊長，加起來最大 兩邊和 > 第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); /// 先有效率排序
        /// 先練習倒過來的迴圈，把大到小印出來 (等一下會刪掉)
        for(int i=nums.size()-1; i>=2; i--){
            /// 取出 nums[i] vs. nums[i-1] nums[i-2]
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i] + nums[i-1] + nums[i-2];
            /// 找到最大的合法三角形，把三邊加起來
        }
        /*for(int i=nums.size()-1; i>=0; i--){ /// 倒過來要--
            cout << nums[i] << " ";
        } /// 把大到小印出來，正確*/

        return 0; /// 找不到答案，return 0
    }
};
