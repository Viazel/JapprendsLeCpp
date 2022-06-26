#include "Table.h"
#include <iostream>

Table::Table(const int table) : numberTable(table) {
    for (int i = 1; i <= 10; i++) {
        tableArray[i] = numberTable * i;
    }
}

const int *Table::GetTable() {
    return tableArray;
}

void Table::PrintTable() {
    for (int i = 1; i <= 10 ; ++i) {
        std::cout << tableArray[i] << std::endl;
    }
}