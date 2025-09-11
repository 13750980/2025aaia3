# Week01-2a.py
# LeetCode 28. Find the Index of the First Occurrence in a String
# 在 haystack 乾稻草堆裡找到 needle 針 (大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        h = len(haystack) # 字串的長度
        n = len(needle) # 字串的長度
        for i in range(h-n+1): # 要記得 +1 , 不包含 1
            # 切片 slicing
            if haystack[i:i+n] == needle:  # 找到的話
                return i # 把位置當答案
        return -1 # 沒有找到
