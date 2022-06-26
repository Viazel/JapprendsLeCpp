#include "Table.h"
#include <iostream>

Table::Table(const int table) : numberTable(table) {
    tableArray = (int*) malloc(sizeof(int) * 11);
    for (int i = 0; i <= 10; ++i) {
        tableArray[i] = numberTable * i;
    }
}

const int *Table::GetTable() {
    return tableArray;
}

Table::~Table() {
    free(tableArray);
}

void Table::PrintTable() {
    for (int i = 0; i <= 10 ; ++i) {
        std::cout << tableArray[i] << std::endl;
    }
}