// week02-5.cpp LeetCode �ǲ߭p�e
// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        // ����, �έp�@�U 26 �Ӧr��, �X�{�X�� ASCII: 0-255
        int a[256] = {}; // �}�C�ŧi, �}�C�Τj�A�����w�]��
        for(int i = 0; i<s.length(); i++){
            char c = s[i]; // ���� i �Ӧr��
            a[c]++; // ����, ��i�������r�����
        }
        for(int i = 0; i<t.length(); i++){
            char c = t[i]; // ���� i �Ӧr��
            a[c]--; // �q���X�r��
            if(a[c]<0) return c; // �r��������, �N�O����
        }
        return 0;


    }
};
