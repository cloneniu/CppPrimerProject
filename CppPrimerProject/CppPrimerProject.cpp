// CppPrimerProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Sales_item.h"

int main() {
	// page 70
	// ? answer of problem 3
	
	// // page 67
	// int null = 0, *p = null;
	
	// ? page 56 problem 6

	// // page 56 problem 5
	// int i = 0;
	// int *ip = i;
	
	// // page 56
	// double obj = 3.14, *pd = &obj;
	// void *pv = &obj;
	// pv = pd;

	// // page 54
	// int *p1 = nullptr;
	// int *p2 = 0;
	// int *p3 = NULL;

	// // // page 50
	// int ival = 1024;
	// int &refVal = ival;
	// // int &refVal2;

	// // page 51
	// int &refVal3 = refVal;
	// std::cout << refVal3 << std::endl;
	// int i = 0, &r1 = i;
	// double d = 0, &r2 = d;
	// r2 = 3.14159;
	// r2 = r1;
	// i = r2;
	// r1 = d;

	// // page 49
	// int i = 100, sum = 0;
	// for (int i = 0; i != 10; ++i) {
	// 	sum += i;
	// }
	// std::cout << i << " " << sum << std::endl;

	// page 47
	// int _;
	// int catch-22; // wrong
	// double Double = 3.14; // correct

	// page 44
	// std::cin >> int input_value; // wrong
	// double salary = wage = 999.99; // wrong
	// int i = { 3.14 }; // wrong lose information
	// int i = 3.14;

	// // page 38
	// unsigned u = 10, u2 = 42;
	// std::cout << u2 - u << std::endl;
	// std::cout << u - u2 << std::endl;
	// int i = 10, i2 = 42;
	// std::cout << i2 - i << std::endl;
	// std::cout << i - i2 << std::endl;
	// std::cout << i - u<< std::endl;
	// std::cout << u - i<< std::endl;

	// //page 24
	// Sales_item total;
	// if (std::cin >> total) {
	// 	Sales_item trans;
	// 	while (std::cin >> trans) {
	// 		if (total.isbn() == trans.isbn()) {
	// 			total += trans;
	// 		} else {
	// 			std::cout << total << std::endl;
	// 			total = trans;
	// 		}
	// 	}
	// 	std::cout << total << std::endl;
	// 	return 0;
	// } else {
	// 	std::cerr << "No data" << std::endl;
	// 	return -1;
	// }

	// // page 24 problem 1,2
	// int intCount = 0;
	// Sales_item itemTemp, itemPrevious;
	// if (std::cin >> itemPrevious) {
	// 	while (std::cin >> itemTemp) {
	// 		if (itemTemp.isbn() == itemPrevious.isbn()) {
	// 			itemPrevious += itemTemp;
	// 			intCount += 1;
	// 		} else {
	// 			std::cout << "for item " << itemPrevious << "\n"
	// 			          << "count: " << intCount << std::endl;
	// 			itemPrevious = itemTemp;
	// 			intCount = 1;
	// 		}
	// 	}
	// 	std::cout << "for item " << itemPrevious << "\n"
	// 	          << "count: " << intCount << std::endl;
	// 	itemPrevious = itemTemp;
	// } else {
	// 	std::cerr << "no input.";
	// }

	// // page 23
	// Sales_item item1, item2;
	// std::cin >> item1 >> item2;
	// if (item1.isbn() == item2.isbn()) {
	// 	std::cout << item1 + item2 << std::endl;
	// 	return 0;
	// } else {
	// 	std::cerr << "Data must refer to same ISBN"
	// 	          << std::endl;
	// 	return -1;
	// }

	// // page 22 problem 3
	// Sales_item itemTemp, itemSum;
	// while (std::cin >> itemTemp) {
	// 	itemSum += itemTemp;
	// }
	// std::cout << itemSum << std::endl;
	// // on windows the exe can not take a file as standard input

	// // page 22 problem 2
	// Sales_item item1, item2;
	// std::cin >> item1 >> item2;
	// std::cout << item1 + item2 << std::endl;

	// // page 21-2
	// Sales_item item1, item2;
	// std::cin >> item1 >> item2;
	// std::cout << item1 + item2 << std::endl;

	// // page 21
	// Sales_item book;
	// std::cin >> book;
	// std::cout << book << std::endl;

	// // page 17
	// int currVal = 0, val = 0;
	// if (std::cin >> currVal) {
	// 	int cnt = 1;
	// 	while (std::cin >> val) {
	// 		if (val == currVal) {
	// 			++cnt;
	// 		}
	// 		else {
	// 			std::cout << currVal << " occurs "
	// 			          << cnt << " times" << std::endl;
	// 			currVal = val;
	// 			cnt = 1;
	// 		}
	// 	}
	// 	std::cout << currVal << " occurs "
	// 	          << cnt << " times" << std::endl;
	// }

	// // page 15
	// int sum = 0, value = 0;
	// while (std::cin >> value) {
	// 	sum += value;
	// }
	// std::cout << "Sum is: " << sum << std::endl;
	// // can not key in end-of-file. caused a error.

	// // page 12 problem 3
	// std::cout <<"Input two numbers" << std::endl;
	// int one = 0, two = 0;
	// std::cin >> one >> two;
	// while (two >= one) {
	// 	std::cout << one << " ";
	// 	++one;
	// }
	// std::cout << std::endl;

	// // page 12 problem 2
	// int final = 10;
	// while (final >= 1) {
	// 	std::cout << final << " ";
	// 	--final;
	// }
	// std::cout << std::endl;

	// // page 13 problem 1
	// int sum = 0, temp = 50;
	// while (temp <= 100) {
	// 	sum += temp;
	// 	++temp;
	// }
	// std::cout << "Sum of 50 to 100 inclusive is "
	//           << sum << std::endl;

	// // page 11
	// int sum = 0, val = 1;
	// // keep executing the while as long as val is less than or equal to 10
	// while (val <= 10) {
	// 	sum += val;
	// 	++val;
	// }
	// std::cout << "Sum of 1 to 10 inclusive is "
	//           << sum << std::endl;
	
	// page 11
	// std::cout << "/*";
	// std::cout << "*/";
	// std::cout << /* "*/" */;
	// std::cout << /* "*/ /* "/*" */;

	// // page 10
	// /*
	//  * comment pairs /* */ cannot nest
	// 	*/

    // // page 6
    // std::cout << "Enter two numbers:" << std::endl;
    // int v1 = 0, v2 = 0;
    // std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
    //           << std::endl;

	system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5.
//   转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
