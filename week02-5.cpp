// week02-5.cpp LeetCode 學習計畫
// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        // 分類, 統計一下 26 個字母, 出現幾次 ASCII: 0-255
        int a[256] = {}; // 陣列宣告, 陣列用大括號的預設值
        for(int i = 0; i<s.length(); i++){
            char c = s[i]; // 找到第 i 個字母
            a[c]++; // 分類, 放進對應的字母桶裡
        }
        for(int i = 0; i<t.length(); i++){
            char c = t[i]; // 找到第 i 個字母
            a[c]--; // 從桶拿出字母
            if(a[c]<0) return c; // 字母不夠用, 就是答案
        }
        return 0;


    }
};
