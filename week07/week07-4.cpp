/// week 07-4.cpp
/// LeetCode Programming Skills Simulation Q4 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; /// 走 4 次
        int d = 0; /// d : 方向; 0=北, 1=東, 2=南, 3=西
        /// 右轉 d = (d+1)%4 取 4 的餘數
        /// 左轉 d = (d-1+4)%4 = (d+3)%4
        int x = 0, y = 0; /// x 座標, y 座標
        int dx[4] = {0, 1, 0, -1}; /// 前進一格, 會走 x+=dx[d] 及 y+=dy[d]
        int dy[4] = {1, 0, -1, 0}; /// 這兩行, 是[地圖2D模擬的精華], 決定前進的步數
        for(char c: instructions){
            if(c=='G') {
                x += dx[d];
                y += dy[d];
            }
            else if(c=='R'){
                d = (d+1) % 4;
            }
            else if(c=='L'){
                d = (d+3) % 4;
            }
        } /// 走不回來的情況
        if(x==0 && y==0) return true;
        else return false;
    }
};
