
#include <gtest/gtest.h>
#include "Solution1.h"

namespace {
	TEST(Solution1_twoSum1_Test1_Test,Test1)
	{
		//测试数据：
		vector<int> v_num;
		v_num.push_back(1);
		v_num.push_back(2);
		v_num.push_back(3);
		v_num.push_back(4);

		int target = 7;

		//测试
		Solution1 test;
		vector<int> result;
		result = test.twoSum1(v_num, target);

		cout << "result:" << endl << "\t";
		for (int i = 0; i < result.size(); ++i) {
			cout << result.at(i) << "\t";
		}
		cout << endl;
	}

	TEST(Solution1_twoSum1_Test1_Test,Test2)
	{
		//测试数据：
		vector<int> v_num;
		v_num.push_back(3);
		v_num.push_back(2);
		v_num.push_back(4);

		int target = 6;

		//测试
		Solution1 test;
		vector<int> result;
		result = test.twoSum1(v_num, target);

		cout << "result:" << endl << "\t";
		for (int i = 0; i < result.size(); ++i) {
			cout << result.at(i) << "\t";
		}

		cout << endl;
	}

	TEST(Solution1_twoSum2_Test1_Test,Test1)
	{
		//测试数据：
		vector<int> v_num;
		v_num.push_back(0);
		v_num.push_back(1);
		v_num.push_back(4);

		int target = 6;

		//测试
		Solution1 test;
		vector<int> result;
		result = test.twoSum2(v_num, target);

		cout << "result:" << endl << "\t";
		for (int i = 0; i < result.size(); ++i) {
			cout << result.at(i) << "\t";
		}
		cout << endl;
	}

	TEST(Solution1_twoSum3_Test1_Test,Test1)
	{
		//测试数据：
		vector<int> v_num;
		v_num.push_back(1);
		v_num.push_back(2);
		v_num.push_back(3);
		v_num.push_back(4);

		int target = 7;

		//测试
		Solution1 test;
		vector<int> result;
		result = test.twoSum3(v_num, target);

		cout << "result:" << endl << "\t";
		for (int i = 0; i < result.size(); ++i) {
			cout << result.at(i) << "\t";
		}
		cout << endl;
	}

}