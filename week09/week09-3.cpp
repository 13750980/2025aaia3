/// week09-3.cpp
/// LeetCode Programming Skills Matrix Q3 54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int up=0, down=m-1, left=0, right=n-1; /// 先把上下左右的邊界, 都宣告一個初始值

        vector<int> ans;
        while(up<=down && left<=right){
            for(int i=left; i<=right; i++){ /// 往右
                ans.push_back(matrix[up][i]);
            }
            up++; /// AI said: up++的邊界內縮
            for(int i=up; i<=down; i++){ /// 往下
                ans.push_back(matrix[i][right]);
            }
            right--; /// AI said: right--右邊界內縮

            if(!(up<=down && left<=right)) break; /// 邊界超過範圍, 交叉, 沒辦法繼續喔!

            ///if (up <= down) {
                for(int i = right; i >= left; i--){ /// 倒過來, 往左
                    ans.push_back(matrix[down][i]);
                }
                down--;
            ///}
            /// if (left <= right) {
                for(int i = down; i >= up; i--){ /// 倒過來, 往上
                    ans.push_back(matrix[i][left]);
                }
                left++;
            ///}
        }
        return ans;
    }
};
