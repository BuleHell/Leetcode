//
// Created by 80216435 on 2018/8/22.
//


#include <gtest/gtest.h>
#include "Solution2.h"

namespace {
	using namespace std;
	TEST(Solution2_addTwoNumbers1__Test1_Test,Test1)
	{
	    Solution2::ListNode *head=new Solution2::ListNode(2);
		Solution2::ListNode *current=head;
		current->next=new Solution2::ListNode(9);
		current=current->next;
		current->next=new Solution2::ListNode(9);
		current=current->next;
		current->next=new Solution2::ListNode(1);
		current=current->next;
		current->next=new Solution2::ListNode(0);

		Solution2 *solution2=new Solution2();

		Solution2::ListNode *aa=solution2->addTwoNumbers1(head,head);
		while (aa!= nullptr)
		{
			cout<<aa->val<<"\t"<<endl;
			aa=aa->next;
		}

	}



}