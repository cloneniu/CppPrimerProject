//-*-coding:chinese-gbk-dos;-*-
// CppPrimerProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include "pch.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <stdio.h>
#include <stdlib.h>
#include <string>
using std::string;
#include "Sales_item.h"
#include "Sales_data.h"
#include <vector>
using std::vector;
#include <iterator>
using std::begin;
using std::end;
#include <bitset>
using std::bitset;
#include <stdexcept>
using std::runtime_error;
#include <typeinfo>
#include <cassert>

// // page 211
// string::size_type find_char(const string &s, char c, string::size_type &occurs) {
// 	auto ret = s.size();
// 	occurs = 0;
// 	for (decltype(ret) i = 0; i != s.size(); ++i) {
// 		if (s[i] == c) {
// 			if (ret == s.size()) {
// 				ret = i;
// 			}
// 			++occurs;
// 		}
// 	}
// 	return ret;
// }

// page 229
// typedef int arrT[10];
// using arrT = int[10];
// arrT (*func(int i));
// arrT func(int i);

// int arr[10];
// int *p[10];
// int (*p)[10];
// int (*func(int i))[10];

// auto func(int i) -> int(*) [10];

// // page 232
// const string &shorterString(const string &s1, const string &s2){
// 	cout << "const" << endl;
// 	return s1.size() < s2.size() ? s1 : s2;
// }

// string &shorterString(string &s1, string &s2){
// 	cout << "non const" << endl;
// 	auto &r = shorterString(const_cast<const string&>(s1),
// 							const_cast<const string&>(s2));
// 	return const_cast<string &>(r);
// }

// // page 238 problem 3
// string make_plural(size_t ctr, const string &word, const string &ending = "s") {
// 	return (ctr > 1) ? word + ending : word;
// }

// // page 243 problem 1
// string fRecVec(vector<string> &s, size_t i) {
// 	if (i == s.size()) {
// 		return "";
// 	} else {
// 		assert(s[i].size() > 3);
// 		if (s[i].size() > 3) {
// 			return s[i] + fRecVec(s, i + 1);
// 		} else {
// 			return fRecVec(s, i + 1);
// 		}
// 	}
// }

// // page 250 problem 1
// int add(int one, int two) {
// 	return one + two;
// }
// int sub(int one, int two) {
// 	return one - two;
// }
// int mult(int one, int two) {
// 	return one * two;
// }
// int divide(int one, int two) {
// 	if (two != 0) {
// 		return one / two;
// 	} else {
// 		std::cerr << "divide 0" << endl;
// 	}
// }

// page 274
#include "Screen.h"

// page 283
#include "Window_mgr.h"

// page 294
#include "NoDefault.h"

// page 304
#include "Example.h"

// page 315
using std::ends;
using std::flush;
using std::unitbuf;
using std::nounitbuf;

// page 316
using std::ostream;
using std::cerr;

// page 317
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::istringstream;

// page 322
#include "Exercise.h"
#include <sstream>
using std::ostringstream;

int main(int argc, char **argv) {
	// cout << unitbuf;
	// // page 323
	// string line, word;
	// vector<PersonInfo> people;
	// string infileName = "PeoplePhone.txt";
	// ifstream ifPeoplePhone(infileName);
	// while (getline(ifPeoplePhone, line)) {
	// 	PersonInfo info;
	// 	istringstream record(line);
	// 	record >> info.name;
	// 	while (record >> word) {
	// 		info.phones.push_back(word);
	// 	}
	// 	people.push_back(info);
	// }
	// for (const auto &entry : people) {
	// ostringstream formatted, badNums;
	// 	for (const auto &nums : entry.phones) {
	// 		if (!valid(nums)) {
	// 			badNums << " " << nums;
	// 		} else {
	// 			formatted << " " << format(nums);
	// 		}
	// 	}
	// 	if (badNums.str().empty()) {
	// 		cout << entry.name << " "
	// 			 << formatted.str() << endl;
	// 	} else {
	// 		cerr << "input error: " << entry.name
	// 			 << " invalid numbers(s) " << badNums.str() << endl;
	// 	}
	// }

	// page 322 exercise 8.3.1
	// // 8.9
	// fReadReturnIstream(cin);
	// // 8.10
	// string infileName = "Sales_data.txt";
	// vector<string> vsTemp;
	// string sTemp;
	// ifstream ifSalesData(infileName);
	// while (!ifSalesData.eof()) {
	// 	getline(ifSalesData, sTemp);
	// 	vsTemp.push_back(sTemp);
	// }
	// for (string t: vsTemp) {
	// 	cout << t << endl;
	// }
	// cout << "read done" << endl;
	// istringstream strmTemp;
	// vector<string> vsWords;
	// for (string t: vsTemp) {
	// 	cout << "..." << endl;
	// 	cout << t << endl;
	// 	cout << "string in vector" << endl;;
	// 	strmTemp.str(t);
	// 	while (strmTemp >> sTemp) {
	// 		cout << sTemp << endl;
	// 	}
	// 	strmTemp.clear();
	// }
	// // 8.12
	// string line, word;
	// vector<PersonInfo> people;
	// string infileName = "PeoplePhone.txt";
	// ifstream ifPeoplePhone(infileName);
	// while (getline(ifPeoplePhone, line)) {
	// 	PersonInfo info;
	// 	istringstream record(line);
	// 	record >> info.name;
	// 	while (record >> word) {
	// 		info.phones.push_back(word);
	// 	}
	// 	people.push_back(info);
	// }
	// for (auto t:people) {
	// 	cout << t.name << endl;
	// 	for (auto phone: t.phones) {
	// 		cout << phone << ends;
	// 	}
	// 	cout << endl;
	// }

	// // page 320 exercise 8.2.2
	// // 8.7
	// string fileioName = "page22_problem1.22_infile.txt";
	// vector<string> vsTemp;
	// ifstream in(fileioName);
	// ofstream out("page320_exercise822_outfile.txt");
	// string sTemp;
	// if (in) {
	// 	while (!in.eof()) {
	// 		getline(in, sTemp);
	// 		vsTemp.push_back(sTemp);
	// 	}
	// 	in.close();
	// }
	// for (string st: vsTemp) {
	// 	out << st << endl;
	// }
	// cout << "end of program" << endl;
	// //8.8
	// string fileioName = "page22_problem1.22_infile.txt";
	// vector<string> vsTemp;
	// ifstream in(fileioName);
	// ofstream out("page320_exercise822_outfile.txt", ofstream::app);
	// string sTemp;
	// if (in) {
	// 	while (!in.eof()) {
	// 		getline(in, sTemp);
	// 		vsTemp.push_back(sTemp);
	// 	}
	// 	in.close();
	// }
	// for (string st: vsTemp) {
	// 	out << st << endl;
	// }
	// cout << "end of program" << endl;

	// // page 319 exercise 8.2.1
	// string fileioName = "page22_problem1.22_infile.txt";
	// vector<string> vsTemp;
	// ifstream in(fileioName);
	// string sTemp;
	// // 8.4
	// if (in) {
	// 	while (!in.eof()) {
	// 		getline(in, sTemp);
	// 		vsTemp.push_back(sTemp);
	// 	}
	// 	in.close();
	// }
	// cout << "output vector" << endl;
	// for (string st: vsTemp) {
	// 	cout << st << endl;
	// }
	// cout << "end of program" << endl;
	// // 8.5
	// if (in) {
	// 	while (in >> sTemp) {
	// 		vsTemp.push_back(sTemp);
	// 	}
	// 	in.close();
	// }
	// cout << "output vector" << endl;
	// for (string st: vsTemp) {
	// 	cout << st << endl;
	// }
	// cout << "end of program" << endl;

	// // page 318
	// string fileioName = "page22_problem1.22_infile.txt";
	// ifstream in(fileioName);
	// ofstream out;
	// out.open(fileioName + ".copy");
	// out.close();
	// out.open(fileioName + "2");
	// cout << in.rdstate() << endl;

	// // page 317
	// ifstream input(argv[1]);
	// ofstream output(argv[2]);
	// Sales_data total;
	// if (read(input, total)) {
	// 	Sales_data trans;
	// 	while (read(input, trans)) {
	// 		if (total.isbn() == trans.isbn()) {
	// 			total.combine(trans);
	// 		} else {
	// 			print(output, total) << endl;
	// 			total = trans;
	// 		}
	// 	}
	// 	print(output, total) << endl;
	// } else {
	// 	cerr << "No data?!" << endl;
	// }

	// // page 316
	// cin.tie(&cout);
	// ostream *old_tie = cin.tie(nullptr);
	// cin.tie(&cerr);
	// cin.tie(old_tie);

	// page 315
	// cout << "endl!" << endl;
	// cout << "flush!" << flush;
	// cout << "ends!" << ends;
	// cout << "hi" << endl;

	// cout << "hi";
	// cout << "hi two";
	// cout << nounitbuf;

	// // page 304
	// Example e;
	// e.initRate(3.3);
	// cout << e.rate << endl;
	// vector<double> vec(10);

	// // page 294
	// CCCC ccc;
	// vector<CCCC> vc(10);
	// ? exercise 7.46

	// // page 291
	// Sales_data d(cin);
	// cout << d.isbn() << endl;

	// // page 274
	// Screen s(5, 6, 'd');
	// s.set(1, 1, 'a');
	// cout << s.get(1, 1) << endl;
	// cout << s.get(2, 1) << endl;
	// cout << s.fGiveSomeMember() << endl;
	// Screen ss(3, 4, 'a');
	// ss.set(0, 0, 'z');
	// Window_mgr w;
	// cout << "length of s is " << w.fPushNew(s) << endl;
	// cout << "length of ss is " << w.fPushNew(ss) << endl;
	// w.fGetItem(0).fPrintContents();
	// cout << endl;
	// w.fGetItem(1).fPrintContents();
	// w.clear(1);
	// cout << "size of ss is " << ss.size() << endl;

	// // page 250 problem 1
	// decltype(add) * addp = add;
	// decltype(sub) * subp = sub;
	// decltype(mult) * multp = mult;
	// decltype(divide) * dividep = divide;
	// vector<int (*)(int, int)> vfp = {addp, subp, multp, dividep};
	// for (auto it : vfp) {
	// 	cout << (*it)(4, 2) << endl;
	// }

	// // page 243 problem 1
	// vector<string> vs = {"asli", "eowiei", "dd"};
	// cout << fRecVec(vs, 0) << endl;

	// // page 242
	// cout << __FILE__ << endl;

	// // page 238 problem 3
	// cout << make_plural(2, "success") << endl;;
	// cout << make_plural(2, "failure") << endl;;

	// // page 232
	// string s1 = "haha", s2 = "d";
	// string &rs1 = s1, &rs2 = s2;
	// cout << shorterString(s1, s2) << endl;

	// // page 229
	// auto func(int i) -> int(*) [10];
	// cout << typeid(func).name() << endl;

	// typedef int arrT[10];
	// arrT (*func(int i));
	// cout << typeid(func).name() << endl;

	// // page 211
	// string s = "aahaha sie";
	// string::size_type ctr = 0;
	// auto index = find_char(s, 'a', ctr);
	// cout << ctr << '\n' << index << endl;

	// // page 198 problem 1
	// int one, two;
	// cin >> one >> two;
	// try {
	// 	if (two == 0) {
	// 		throw runtime_error("divide 0");
	// 	} else {
	// 		cout << (one / two) << endl;
	// 	}
	// } catch (runtime_error err) {
	// 	cout << err.what() << endl;
	// }

	// // page 195
	// Sales_item item1, item2;
	// while (cin >> item1 >> item2) {
	// 	try {
	// 		if (item1.isbn() != item2.isbn()) {
	// 			throw runtime_error("Data must refer to same ISBN");
	// 		} else {
	// 			cout << item1 + item2 << endl;
	// 		}
	// 	} catch (runtime_error err) {
	// 		cout << err.what()
	// 			 << "\nTry Again? Enter y or n" << endl;
	// 		char c;
	// 		cin >> c;
	// 		if (!cin || c == 'n') {
	// 			break;
	// 		}
	// 	}
	// }

	// page 194
	// Sales_item item1, item2;
	// cin >> item1 >> item2;
	// if (item1.isbn() != item2.isbn()) {
	// 	throw runtime_error("Data must refer to same ISBN");
	// }

	// page 190 problem 1 
	// do {
	// 	int v1, v2;
	// 	cout << "Please enter two numbers to sum:" ;
	// 	if (cin >> v1 >> v2) {
	// 		cout << "Sum is: " << v1 + v2 << endl;
	// 	}
	// } while (cin);

	// do {
	// 	int ival = 2;
	// } while (ival);

	// // page 182
	// switch (true) {
	// case true: {
	// 	string file_name;
	// 	int ival = 0;
	// 	int jval;
	// 	break;
	// }
	// case false:
	// 	jval = 2;
	// 	if (file_name.empty) {
	// 		;
	// 	}
	// }

	// // page 158 problem 1
	// cout << "size of built-in types" << endl;
	// cout << "bool: " << sizeof(bool) << endl;
	// cout << "char: " << sizeof(char) << endl;
	// cout << "wchar_t: " << sizeof(wchar_t) << endl;
	// cout << "char16_t: " << sizeof(char16_t) << endl;
	// cout << "char32_t: " << sizeof(char32_t) << endl;
	// cout << "short: " << sizeof(short) << endl;
	// cout << "int: " << sizeof(int) << endl;
	// cout << "long: " << sizeof(long) << endl;
	// cout << "long long: " << sizeof(long long) << endl;
	// cout << "float: " << sizeof(float) << endl;
	// cout << "double: " << sizeof(double) << endl;
	// cout << "long double: " << sizeof(long double) << endl;
	// problem 2
	// int x[10];
	// int *p = x;
	// cout << sizeof(x) / sizeof(*x) << endl;
	// cout << sizeof(p) / sizeof(*p) << endl;

	// // page 157
	// int *p;
	// cout << sizeof(p) << endl;
	// cout << sizeof(char) << endl;

	// // page 156
	// wchar_t out = 'a';
	// cout << out << endl;
	// out = ~'q' << 6;
	// cout << out << endl;

	// // page 154 155
	// unsigned long quiz1 = 0;
	// quiz1 |= 1UL << 27;
	// cout << "No.27 student passed" << endl;
	// cout << bitset<sizeof(unsigned long) * 8>(quiz1) << endl;
	// cout << "No.27 student faiedl" << endl;
	// quiz1 &= ~(1UL << 27);
	// cout << bitset<sizeof(unsigned long) * 8>(quiz1) << endl;
	// bool status = quiz1 & (1UL << 27);
	// cout << "whether No.27 student passed" << endl;
	// cout << status << endl;
	
	// // page 150
	// vector<string> svec = {"a", "b"};
	// for (vector<string>::const_iterator it = svec.begin(); it != svec.end(); ) {
	// 	cout << *it << endl;
	// 	// cout << it++->empty() << endl;
	// 	cout << ++*it << endl;
	// }

	// // page 149
	// string s("some string");
	// string::iterator beg = s.begin();
	// while (beg != s.end() && !isspace(*beg)) {
	// 	*beg = toupper(*beg);
	// 	++beg;
	// }
	// cout << s << endl;
	
	// // page 129
	// int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	// for (int (*p)[4] = begin(ia); p != end(ia); ++p) {
	// 	for (int *q = begin(*p); q != end(*p); ++q) {
	// 		cout << *q << ' ';
	// 	}
	// }
	// cout << endl;

	// // page 117 problem 2 3
	// constexpr size_t array_size = 10;
	// int foo[array_size];
	// for (size_t temp = 0; temp < array_size; ++temp) {
	// 	foo[temp] = temp;
	// 	cout << foo[temp];
	// }
	// cout << endl;
	// int foo2[array_size];
	// for (size_t temp = 0; temp < array_size; ++temp) {
	// 	foo2[temp] = foo[temp];
	// 	cout << foo2[temp];
	// }
	// cout << endl;

	// // page 115 problem 2
// string sa2[10];
// int ia2[10];
	// cout << "string" << endl;
	// for (string temp: sa2) {
	// 	cout << temp << endl;
	// }
	// cout << "int" << endl;
	// for (int &temp: ia2) {
	// 	cout << temp << endl;
	// }
	// string sa2[10];
	// int ia2[10];
	// cout << "string" << endl;
	// for (string temp: sa2) {
	// 	cout << temp << endl;
	// }
	// cout << "int" << endl;
	// for (int &temp: ia2) {
	// 	cout << temp << endl;
	// }

	// // page 115 problem 1
	// unsigned buf_size = 1024;
	// int ia[buf_size];
	// int ia[4 * 7 - 14];
	// int ia[11] = "fundamental";
	
	// // page 102 problem 1 2
	// vector<string> vstrings;
	// string sTemp;
	// while (cin >> sTemp) {
	// 	vstrings.push_back(sTemp);
	// 	cout << sTemp;
	// }
	// cout << endl;

	// // page 97
	// vector<int> ivec;
	// vector<Sales_item> Sales_vec;
	// vector<vector<string>> file;

	// ? page 96 problem 6
	// const char?

	// // page 96 problem 5
	// string in, out;
	// getline(cin, in);
	// for (char &c: in) {
	// 	if (!ispunct(c)) {
	// 		out += c;
	// 	}
	// }
	// cout << out << endl;

	// // page 95
	// const string hexdigits = "0123456789ABCDEF";
	// cout << "enter a series of numbers between 0 and 15"
	// 	 << " separated by spaces. Hit ENTER when finished: "
	// 	 << endl;
	// string result;
	// string::size_type n;
	// while (cin >> n) {
	// 	if (n < hexdigits.size()) {
	// 		result += hexdigits[n];
	// 	}
	// }
	// cout << "Your hex number is: " << result << endl;

	// // page 92
	// string s("hello world!!!");
	// string::size_type punct_cnt = 0;
	// for (auto c : s) {
	// 	if (ispunct(c)) {
	// 		++punct_cnt;
	// 	}
	// }
	// cout << punct_cnt
	// 	 << " punctuation charactes in " << s << endl;

	// // page 91
	// string str("something string");
	// for (char c : str) {
	// 	cout << c << endl;
	// }

	// // page 90 problem 4
	// string concat, temp;
	// cin >> concat;
	// while (cin >> temp) {
	// 	concat += " " + temp;
	// }
	// cout << concat << endl;

	// page 90 problem 3
	// string one, two;
	// cin >> one;
	// cin >> two;
	// if (one.size() == two.size()) {
	// 	cout << "equal" << endl;
	// } else {
	// 	if (one.size() > two.size()) {
	// 		cout << "one larger" << endl;
	// 	} else {
	// 		cout << "two larger" << endl;
	// 	}
	// }

	// // page 90 problem 3
	// string one, two;
	// cin >> one;
	// cin >> two;
	// if (one == two) {
	// 	cout << "equal" << endl;
	// } else {
	// 	if (one > two) {
	// 		cout << "one larger" << endl;
	// 	} else {
	// 		cout << "two larger" << endl;
	// 	}
	// }

	// // page 90 problem 1
	// string word;
	// while (cin >> word) {
	// 	cout << word << endl;
	// }

	// // page 87
	// string line;
	// while (getline(cin,line)) {
	// 	cout << line << endl;
	// }

	// // page 85
	// string s;
	// cin >> s;
	// cout << s << endl;

	// // page 74 75
	// Sales_data data1, data2;
	// double price = 0;
	// std::cin >> data1.bookNo >> data1.units_sold >> price;
	// data1.revenue = data1.units_sold * price;
	// std::cin >> data2.bookNo >> data2.units_sold >> price;
	// data2.revenue = data2.units_sold * price;
	// if (data1.bookNo == data2.bookNo) {
	// 	unsigned totalCnt = data1.units_sold + data2.units_sold;
	// 	double totalRevenue = data1.revenue + data2.revenue;
	// 	std::cout << data1.bookNo << " " << totalCnt
	// 	          << " " << totalRevenue << " ";
	// 	if (totalCnt != 0) {
	// 		std::cout << totalRevenue / totalCnt << std::endl;
	// 	} else {
	// 		std::cout << "(no sales)" << std::endl;
	// 	}
	// 	return 0;
	// } else {
	// 	std::cerr << "Data must refer to the same ISBN"
	// 	          << std::endl;
	// 	return -1;
	// }
	
	// code to read in to data1 and data2
	// code to check whether data1 and data2 have the same ISBN
	//     and if so print the sum of data1 and data2

	// // page 73 74
	// struct Sales_data {
	// 	std::string bookNo;
	// 	unsigned units_sold = 0;
	// 	double revenue = 0.0;
	// }

	// // page 72
	// int a = 3, b = 4;
	// decltype(a) c = a;
	// decltype((b)) d = a;
	// ++c;
	// ++d;
	// std::cout << a << '\n'
	//           << b << '\n'
	//           << c << '\n'
	//           << d << '\n' << std::endl;

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
