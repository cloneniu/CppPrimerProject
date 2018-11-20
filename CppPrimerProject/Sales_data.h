#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
public:
	// constructors
	// Sales_data() = default;
	// Sales_data(const std::string &s = "ssss"): bookNo(s) { }
	// Sales_data(const std::string &s, unsigned n, double p):
	// 	bookNo(s), units_sold(n), revenue(p * n) { }
	// Sales_data(std::istream &is);

	// delegating constructors page 292
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p * n) { }
	Sales_data(): Sales_data("", 0, 0) { }
	explicit Sales_data(std::string s): Sales_data(s, 0, 0) { }
	explicit Sales_data(std::istream &is);
	// operations
	// std::string isbn() const { return this->bookNo; }
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
private:
	// data members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif


