//
// Created by 80216435 on 2018/8/22.
//

#include "Solution2.h"

Solution2::ListNode *Solution2::addTwoNumbers1(Solution2::ListNode *l1, Solution2::ListNode *l2) {
	ListNode * result= addTwoNumbers(l1, l2, 0);
	return result;
}

Solution2::ListNode *Solution2::addTwoNumbers(Solution2::ListNode *l1, Solution2::ListNode *l2, int carry) {
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
	sumNode->next = addTwoNumbers(l1, l2, sum / 10);
	return sumNode;
}
