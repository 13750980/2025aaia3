/// week13-2a.cpp 2in1
/// LeetCode Programming Skills Linked List Q1 : 21. Merge Two Sorted Lists
/// 左邊 list 和 右邊 list 合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /// 練習寫「資料結構」怎麼寫程式
        ListNode* ans = new ListNode(999); /// 老師亂寫的
        ListNode* ans2 = new ListNode(888); /// 老師亂寫的
        ans -> next = ans2; /// 把他們接起來
        /// 先寫 4 行，熟悉一下資料結構，怎麼new?怎麼接起來?
        return ans;
    }
};
