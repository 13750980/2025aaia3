# Week01-2a.py
# LeetCode 28. Find the Index of the First Occurrence in a String
# �b haystack ���_���̧�� needle �w (�j�����w)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        h = len(haystack) # �r�ꪺ����
        n = len(needle) # �r�ꪺ����
        for i in range(h-n+1): # �n�O�o +1 , ���]�t 1
            # ���� slicing
            if haystack[i:i+n] == needle:  # ��쪺��
                return i # ���m����
        return -1 # �S�����
