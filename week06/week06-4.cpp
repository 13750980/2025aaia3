/// week06-4.cpp
/// LeetCode Programming Skills Simulation 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; /// 一開始在原點 Origin
        for(char c : moves){ /// C++ 進階迴圈
            if(c=='U') x++; /// 往上
            else if(c=='D') x--; /// 往下
            else if(c=='L') y++; /// 往左
            else if(c=='R') y--; /// 往右
        }
        return(x==0 && y==0); /// 最後檢查是否在原點(0,0)
    }
};
