/// week14-3.cpp
/// LeetCode Programming Skills Linked List Q4: 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* head){ /// 自訂函式(剛寫過 week14-2.cpp)
       if(head==nullptr || head->next==nullptr) return head; /// 終止條件
       ListNode* ans = myReverse(head->next); /// 函式呼叫函式
       head->next->next = head; /// 把前面，倒轉過來的最後面
       head->next = nullptr; /// 收尾
       return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); /// 反過來
        ListNode* list2 = myReverse(l2); /// 反過來

        ListNode* ans = myaddTwoNumbers(list1, list2); /// 呼叫上週的 week13-3
        return myReverse(ans); /// 反過來
    }
    /// 還缺 myaddTwoNumbers() 函式，要把它寫出來
    ListNode* myaddTwoNumbers(ListNode* list1, ListNode* list2){
        ListNode* ans = new ListNode(999); /// 隨便的
        ListNode* ans2 = ans; /// 幫忙 ans 收尾!
        int carry = 0; /// 進位
        while(list1 != nullptr || list2 != nullptr){
            int now = carry; /// 現在要處理的位數
            if(list1 != nullptr){
                now += list1->val; /// 加入值
                list1 = list1->next; /// 換下一筆，待命
            }
            if(list2 != nullptr){
                now += list2->val; /// 加入值
                list2 = list2->next; /// 換下一筆，待命
            }
            ans2 -> next = new ListNode(now%10); /// 記下個位數
            carry = now/10; /// 進位的部分
            ans2 = ans2-> next; /// 換下一筆
        }
        /// 忘記處理進位!
        if(carry>0) ans2->next = new ListNode(carry);
        return ans->next;
    }
};
