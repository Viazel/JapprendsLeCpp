#include "Table.h"
#include <iostream>

Table::Table(const int& number) {

	this->table = new int[11];

	for (int i = 0; i <= 10; i++)
	{
		this->table[i] = number * i;
	}
}

Table::~Table() {
	delete[] this->table;
}

const int& Table::GetTable(const int& number) const {
	return this->table[number];
}

void Table::PrintTable() const {
	for (int i = 0; i <= 10; i++)
	{
		std::cout << *this->table << "*" << i << "=" << this->table[i] << std::endl;;
	}
}