// week04-3.cpp
// LeetCode Programming Skills Q7: 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // �W�ұйL, �}�C���j�p
        for(int i = n-1; i>=0; i--){ // �˹L�Ӫ��j��
            if (digits[i] == 9) { // �n�B�z�i��
                digits[i] = 0; // �]�� 0 �~�� ������
            }
            else { // ���i��, ���� ++ �N����
                digits[i]++; // ²�� +1
                return digits; // �������}�C[����]
            }
        }
        digits.insert(digits.begin(), 1); // �̥���n���J 1
        return digits; // ����
    }
};
