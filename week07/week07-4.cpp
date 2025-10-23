/// week 07-4.cpp
/// LeetCode Programming Skills Simulation Q4 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; /// �� 4 ��
        int d = 0; /// d : ��V; 0=�_, 1=�F, 2=�n, 3=��
        /// �k�� d = (d+1)%4 �� 4 ���l��
        /// ���� d = (d-1+4)%4 = (d+3)%4
        int x = 0, y = 0; /// x �y��, y �y��
        int dx[4] = {0, 1, 0, -1}; /// �e�i�@��, �|�� x+=dx[d] �� y+=dy[d]
        int dy[4] = {1, 0, -1, 0}; /// �o���, �O[�a��2D���������], �M�w�e�i���B��
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
        } /// �����^�Ӫ����p
        if(x==0 && y==0) return true;
        else return false;
    }
};
