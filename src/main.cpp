#include <iostream>

#include "Table/Table.h"

int main() {

	Table ta(4);

	ta.PrintTable();

	std::cout << ta.GetTable(0) << std::endl;

	return 0;
}