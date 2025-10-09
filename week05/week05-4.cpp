/// week05-4.cpp
/// LeetCode Programming Skills 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){ /// 每一個字母
            s[i] = tolower(s[i]); /// 變成小寫
        } /// 每個字母, 都變成小寫(完整版要#include<ctype.h>)
        /// 或是用 #include <cctype> 兩個是同一個檔案
        return s; /// 答案送出
    }
};
