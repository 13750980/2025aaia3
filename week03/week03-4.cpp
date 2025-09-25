// week03-4.cpp
// LeetCode 挑戰題: 120. Triangle 找到最上面往下走的最小值
class Solution { // 使用 "動態規劃" 慢慢更新陣列
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle[i][j] 第 i 層的第 j 個數
        int n = triangle.size(); // 總共有幾層
        // 從下往上查, 最下面的第 n-1 層, 沒問題, 就是本身的最小值, 所以 n-2 往上更新
        for(int i=n-2; i>=0; i--){ // 倒過來的迴圈, 往 n-2 往上
                for(int j=0; j<=i; j++) // 往左到右, 第 i 層有 0...i 個數, 都要更新
            triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            // 每個人, 要看它下面 2 個選擇(正下方, 偏右), 找最小的那個
        }
        return triangle[0][0];
    }
};
