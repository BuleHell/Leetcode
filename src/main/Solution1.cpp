//
// Created by 80216435 on 2018/5/31.
//


#include <map>
#include "Solution1.h"


vector<int> Solution1::twoSum1(vector<int> &nums, int target) {

	vector<int> result;
	//找到一个数，然后再找另外一个数：O（n^2）
	for (int i = 0; i < nums.size(); ++i) {
		int another = target - nums.at(i);
		for (int j = i + 1; j < nums.size(); ++j) {
			if (nums.at(j) == another) {
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}

vector<int> Solution1::twoSum2(vector<int> &nums, int target) {
	vector<int> result;

	//这里使用结构体，重排序，保存数组的索引
	vector<elem> tmp2;
	for (int k = 0; k < nums.size(); ++k) {
		elem a;
		a.index = k;
		a.num = nums.at(k);
		tmp2.push_back(a);
	}


	sort(tmp2.begin(), tmp2.begin() + tmp2.size(), compare);

	for (int i = 0; i < nums.size(); ++i) {
		if (tmp2.at(i).num > target / 2) {
			return result;
		} else {
			for (int j = tmp2.size() - 1; j > i; --j) {
				if (tmp2.at(i).num + tmp2.at(j).num == target) {
					result.push_back(tmp2.at(i).index);
					result.push_back(tmp2.at(j).index);
					return result;
				}

			}
		}


	}
	return result;
}

vector<int> Solution1::twoSum3(vector<int> &nums, int target) {
	//我的思路是：
	//使用位图的方式：先扫描一遍，让有数的地方为1，没数的地方为0
	//第二遍再次扫描：扫这个数位图，两两有才可以！
	//这里引入一个问题，就是给的数特别的离散的时候，会造成很大的位图浪费～
	//我觉得，直接使用：map来玩算了。。。（你要是有牛逼的办法，可以来怼！）
	vector<int> result;

	map<int, int> table;
	for (int i = 0; i < nums.size(); ++i) {
		table[target - nums.at(i)] = i;//第i个数的另一半是多少 的一个表
		// ["另一半的数"]="当前数的索引"
		//
		//另一半的数刚好在这里，并且，它不是自身
	}

	for (int j = 0; j < nums.size(); ++j) {

		if (table.find(nums.at(j)) != table.end() && table.find(nums.at(j))->first != j) {
			result.push_back(j);
			result.push_back(table.find(nums.at(j))->second);
			if (result.size()) {
				return result;
			}
		}
	}

	return result;
}
