// Week01-1.cpp
// LeetCode 28. Find the Index of the First Occurrence in a String
// 在 haystack 乾稻草堆裡找到 needle 針 (大海撈針)
// haystack = "sadbutsad"
// needle =   "sad"
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length(); //
        for(int i=0; i<=h-n; i++){ // 假設 h=9 減 n=3 得到 6
            // substr(開始, 長度) 部分的字串
            if(haystack.substr(i,n) == needle) return i; // 找到答案
        }
        // 迴圈裏面, 找不到 needle 就失敗
        return -1;
    }
};
