/// week12-4.cpp
/// LeetCode Programming Skills Math Q5: 1232. Check If It Is a Straight Line
/// 測一下，所有的點，是否在同一直線上
/// 斜率 a:b = c:d ; a/b = c/d; a*b = c*d
/// dx:dy = dxx:dyy 對稱的
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];
        int dx = x1-x0, dy = y1-y0; /// dx 是 x 的差值, dy 是 y 的差值
        for(int i=2; i<coordinates.size(); i++){
            int xx = coordinates[i][0], yy = coordinates[i][1];
            /// 希望 dx*dyy == dy*dxx 但是如果不相等，直接失敗
            if(dx*(yy-y0) != dy*(xx-x0)) return false;
        }/// 前面有失敗，就會提早結束，如果都沒失敗
        return true; /// 成功!
    }
};
