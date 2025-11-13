/// week10-1a.cpp PART1: 用 for 迴圈
/// LeetCode Programming Skills Math Q1: 1523. Count Odd Numbers in an Interval Range
/// 從 low ... high 裡面有幾個 odd numbers?
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low; i<=high; i++){ /// 迴圈很多次
            if(i%2==1) ans++; /// 找出奇數
        }
        return ans;
    }
};
