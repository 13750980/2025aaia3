/// week09-2.cpp
/// LeetCode Programming Skills Matrix Q2 1572. Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size(), N = mat[0].size(); /// 左手 M , 右手 N
        int ans = 0;
        for(int i=0; i<M; i++){ /// 左手 i vs. M
            for(int j=0; j<N; j++){/// 右手 j vs. N
                if(i==j || i+j==N-1){  /// 如果是對角線的話
                    ans += mat[i][j];
                }
            }
        }
        return ans;
    }
};
