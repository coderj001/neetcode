#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
      unordered_set<int> Set(nums.begin(), nums.end());


      while(head != nullptr && Set.find(head->val) != Set.end()) {
        ListNode* tmp = head;
        head = head -> next;
        delete tmp;
      }

      if (head == nullptr) {
        return nullptr;
      }

      ListNode* p = head;
      while (p->next != nullptr) {
        if (Set.find(p->next->val) != Set.end()) {
          auto tmp = p->next;
          p->next = tmp->next;
          delete tmp; // free mem
        } else {
          p = p->next;
        }
      }
      return head;
    }
};
