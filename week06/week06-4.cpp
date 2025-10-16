/// week06-4.cpp
/// LeetCode Programming Skills Simulation 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; /// �@�}�l�b���I Origin
        for(char c : moves){ /// C++ �i���j��
            if(c=='U') x++; /// ���W
            else if(c=='D') x--; /// ���U
            else if(c=='L') y++; /// ����
            else if(c=='R') y--; /// ���k
        }
        return(x==0 && y==0); /// �̫��ˬd�O�_�b���I(0,0)
    }
};
