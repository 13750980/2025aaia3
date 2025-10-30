/// week08-2.cpp
/// LeetCode Programming Skills Matrix Q4 73. Set Matrix Zeroes
/// 設定 0 的位置, 要兩階段, 先讀完, 再設 0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /// 第一階段: 先讀完, 記下全部的 0 對應的 i, j
        int M = matrix.size(), N = matrix[0].size(); /// 左手M; 右手N
        vector<int> markI(M, 0), markJ(N, 0); /// 宣告C++的陣列, 長度分別為M & N, 裡面都設成 0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ /// 記下對應的 i, j
                    markI[i] = 1; /// 標記 i 的這整橫條, 等下都要清為 0
                    markJ[j] = 1; /// 標記 j 的這整直條, 等下都要清為 0
                }
            }

        }
        /// 第二階段: 再照著 markI 和 markJ 的標記, 把整條都清為 0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i] == 1|| markJ[j]==1) matrix[i][j] = 0;
            } /// 如果有標記, 再把它對應的項變成 0
        }
    }
};
