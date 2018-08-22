//
// Created by 80216435 on 2018/8/22.
//
#include <iostream>
using namespace std;

class Solution {
public:
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};

	ListNode *addTwoNumbers1(ListNode *l1, ListNode *l2, int carry)
	{
		if (l1 == nullptr && l2 == nullptr) {
		if (carry != 0)
			return new ListNode(carry);
		return nullptr;
	}

	int sum {carry};

	if (l1 != nullptr) {
		sum += l1->val;
		l1 = l1->next;
	}

	if (l2 != nullptr) {
		sum += l2->val;
		l2 = l2->next;
	}

	ListNode* sumNode = new ListNode(sum % 10);
	sumNode->next = addTwoNumbers1(l1, l2, sum / 10);
	return sumNode;

};

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode * result= addTwoNumbers1(l1, l2, 0);
		return result;
	};
};