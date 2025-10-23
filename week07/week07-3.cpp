/// week 07-3.cpp
/// LeetCode Programming Skills Simulation Q3 1275. Find Winner on a Tic Tac Toe

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; /// C語言的陣列, 要有 {} 代表初始值; vector 是C++的陣列(伸縮自如)
        int now = 1; /// 1: 玩家 A; 2: 玩家 B
        int winner = 0;
        for (vector<int> & move : moves){
            int i = move[0], j = move[1]; /// 取出座標
            a[i][j] = now; /// 把棋子, 下在陣列裡
            /// 下完後, 要檢查是否得勝?
            if(now == a[i][0] && now == a[i][1] && now == a[i][2]) winner = now; /// 橫線
            if(now == a[0][j] && now == a[1][j] && now == a[2][j]) winner = now; /// 直線
            if(now == a[0][0] && now == a[1][1] && now == a[2][2]) winner = now; /// 左上右下斜線
            if(now == a[0][2] && now == a[1][1] && now == a[2][0]) winner = now; /// 右上左下斜線
            if(now == 1) now = 2; /// 兩人要交換 1 換 2
            else now = 1;             /// 2 換 1
        }
        if (winner==1) return "A";
        else if (winner==2) return "B";
        else if (moves.size()==9) return "Draw"; /// 打平
        else return "Pending"; /// 送出後, 發現還有第 4 種可能, 叫 Pending 還沒下完
    }
};
