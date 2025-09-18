// week02-4.cpp LeetCode ¾Ç²ß­pµe
// 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        string ans;

        for(int i=0; i<n1+n2; i++){
            if(i<n1) ans += word1[i];
            if(i<n2) ans += word2[i];
        }
        return ans;
    }
};
