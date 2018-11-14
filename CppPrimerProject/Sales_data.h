#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
	// operations
	// std::string isbn() const { return this->bookNo; }
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	// data members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif
