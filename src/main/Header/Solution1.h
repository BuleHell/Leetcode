//
// Created by 80216435 on 2018/5/31.
//

#ifndef LEETCODE_SOLUTION1_H
#define LEETCODE_SOLUTION1_H

#include<iostream>
#include <vector>
#include <algorithm>

// 题目:
//Given an array of integers, return indices of the two numbers such
//that they add up to a specific target.
//You may assume that each input would have exactly one solution, and
//you may not use the same element twice.
//
//Example:
//		Given nums = [2, 7, 11, 15], target = 9,
//
//		Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].



using namespace std;

class Solution1 {
public:
	//排序体
	class elem {
	public:
		int num;
		int index;
	};

	static bool compare(elem i, elem j) { return (i.num < j.num); }

	//解法1：
	vector<int> twoSum1(vector<int> &nums, int target);

	//解法2：
	vector<int> twoSum2(vector<int> &nums, int target);

	//解法3：
	vector<int> twoSum3(vector<int> &nums, int target);
};


#endif //LEETCODE_SOLUTION1_H
