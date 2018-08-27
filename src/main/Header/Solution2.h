//
// Created by 80216435 on 2018/8/22.
//

#ifndef LEETCODE_SOLUTION2_H
#define LEETCODE_SOLUTION2_H
//You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order and each of their nodes contain a single digit.
// Add the two numbers and return it as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//Example:
//
//		Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//Explanation: 342 + 465 = 807.

class Solution2 {
public:
	 struct ListNode {
		     int val;
		     ListNode *next;
		     ListNode(int x) : val(x), next(nullptr) {}
		 };

	ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) ;
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0);
};


#endif //LEETCODE_SOLUTION2_H
