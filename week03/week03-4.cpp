// week03-4.cpp
// LeetCode �D���D: 120. Triangle ���̤W�����U�����̤p��
class Solution { // �ϥ� "�ʺA�W��" �C�C��s�}�C
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle[i][j] �� i �h���� j �Ӽ�
        int n = triangle.size(); // �`�@���X�h
        // �q�U���W�d, �̤U������ n-1 �h, �S���D, �N�O�������̤p��, �ҥH n-2 ���W��s
        for(int i=n-2; i>=0; i--){ // �˹L�Ӫ��j��, �� n-2 ���W
                for(int j=0; j<=i; j++) // ������k, �� i �h�� 0...i �Ӽ�, ���n��s
            triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            // �C�ӤH, �n�ݥ��U�� 2 �ӿ��(���U��, ���k), ��̤p������
        }
        return triangle[0][0];
    }
};
