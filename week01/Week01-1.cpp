// Week01-1.cpp
// LeetCode 28. Find the Index of the First Occurrence in a String
// �b haystack ���_���̧�� needle �w (�j�����w)
// haystack = "sadbutsad"
// needle =   "sad"
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length(); //
        for(int i=0; i<=h-n; i++){ // ���] h=9 �� n=3 �o�� 6
            // substr(�}�l, ����) �������r��
            if(haystack.substr(i,n) == needle) return i; // ��쵪��
        }
        // �j���ح�, �䤣�� needle �N����
        return -1;
    }
};
