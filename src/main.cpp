#include <iostream>

#include "Table/Table.h"

int main() {

	Table ta(49);

	ta.PrintTable();

	std::cout << ta.GetTable(8) << std::endl;

	return 0;
}