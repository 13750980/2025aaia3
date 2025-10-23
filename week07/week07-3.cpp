/// week 07-3.cpp
/// LeetCode Programming Skills Simulation Q3 1275. Find Winner on a Tic Tac Toe

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; /// C�y�����}�C, �n�� {} �N���l��; vector �OC++���}�C(���Y�ۦp)
        int now = 1; /// 1: ���a A; 2: ���a B
        int winner = 0;
        for (vector<int> & move : moves){
            int i = move[0], j = move[1]; /// ���X�y��
            a[i][j] = now; /// ��Ѥl, �U�b�}�C��
            /// �U����, �n�ˬd�O�_�o��?
            if(now == a[i][0] && now == a[i][1] && now == a[i][2]) winner = now; /// ��u
            if(now == a[0][j] && now == a[1][j] && now == a[2][j]) winner = now; /// ���u
            if(now == a[0][0] && now == a[1][1] && now == a[2][2]) winner = now; /// ���W�k�U�׽u
            if(now == a[0][2] && now == a[1][1] && now == a[2][0]) winner = now; /// �k�W���U�׽u
            if(now == 1) now = 2; /// ��H�n�洫 1 �� 2
            else now = 1;             /// 2 �� 1
        }
        if (winner==1) return "A";
        else if (winner==2) return "B";
        else if (moves.size()==9) return "Draw"; /// ����
        else return "Pending"; /// �e�X��, �o�{�٦��� 4 �إi��, �s Pending �٨S�U��
    }
};
