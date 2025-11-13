/// week10-2.cpp
/// LeetCode Programming Skills Math Q2: 1491. Average Salary Excluding the Minimum and Maximum Salary
/// 埃程㎝程, キА羱

class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; /// р羱常癬ㄓ
        int n = salary.size(); /// 羆Τ n 
        int M = salary[0], m = salary[0]; /// р材 0 , 讽程程
        for(int i=0; i<n; i++){
            total += salary[i]; /// р羱常癬ㄓ
            if(salary[i]>M) M = salary[i]; /// ゑ程, 传Θ程
            if(salary[i]<m) m = salary[i]; /// ゑ程, 传Θ程
        }
        /// return total/n; /// ぃ钡场常埃, 璶Ι奔程㎝程
        return (total-M-m)/(n-2); /// 埃 2  (程程)埃
    }
};
