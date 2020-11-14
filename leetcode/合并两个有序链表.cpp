#include <iostream>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// 递归


	}
};

int main() {
	ListNode l1 = ListNode(1);
	l1.next = new ListNode(2);
	l1.next->next = new ListNode(4);

	ListNode l2 = ListNode(1);
	l2.next = new ListNode(3);
	l2.next->next = new ListNode(4);

	Solution temp;
	ListNode* res = temp.mergeTwoLists(&l1, &l2);

	while (res != nullptr) {
		cout << res->val << endl;
		res = res->next;
	}

	return 0;
}

/*
 * 迭代
ListNode *res= new ListNode(0);
		ListNode *p = res;
		while (l1 != nullptr && l2 != nullptr) {
			// 构建链表
			if (l1->val < l2->val) {
				res->next = l1;
				l1 = l1->next;
			}
			else
			{
				res->next = l2;
				l2 = l2->next;
			}
			res = res->next;
		}
		res->next = l1 == nullptr ? l2 : l1;

		return p->next;
*/