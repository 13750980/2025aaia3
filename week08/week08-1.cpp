/// week08-1.cpp
/// LeetCode Programming Skills Matrix Q1 1672. Richest Customer Wealth
/// 找到最有錢的人, 有多少錢? (陣列的最大值)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){ /// 左手 i
            int now = 0; /// 迴圈前面 now = 0
            for(int j=0; j<accounts[0].size(); j++){ /// 右手 j
                now += accounts[i][j]; /// 金錢加起來
            } /// 迴圈裏面更新 now 陣列 左手 i 右手 j
            /// 迴圈後面 now 拿來用
            ans = max(ans, now);  /// 最有錢的人, 更新答案
        }
        return ans;
    }
};
