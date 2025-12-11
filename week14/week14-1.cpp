/// week14-1.cpp
/// LeetCode Programming Skills Linked List Q2: 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; /// 伸縮自如的陣列, 把值存起來
        while(head != nullptr){
            a.push_back(head -> val);
            head = head -> next;
        }
        ListNode * ans = new ListNode(999); /// 隨便取的
        ListNode* ans2 = ans; /// 負責把 ans 的尾巴收尾
        /// 倒過來的迴圈, 再把它塞到 ans 尾巴的答案
        for(int i=a.size()-1; i>=0; i--){
            ans2 -> next = new ListNode(a[i]); /// 下一筆
            ans2 = ans2->next; /// 到下一筆, 繼續收尾
        }
        return ans->next; /// 還差一點點!
    }
};
