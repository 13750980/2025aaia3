// week05-1.cpp
// LeetCode Programming Skills 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // ��r��A�R�����e�Ъ� cin iostream
        string word;// �r�ꪺword
        // ss>> word;// �ܹ����e�Ъ� cin>>word
        //cout <<"Ū��F"<< word << "\n";// ���ե�
        //ss >>word;// �ܹ����e�Ъ� cin>> word
        //cout<<"Ū��F��<< word <<"\n";// ���ե�
        while(ss >> word){//�@��Ū�i��
            //�̭��ƻ򳣤���
        }
        return word.length();//�̫᪺�r������//return 0;

    }
};
