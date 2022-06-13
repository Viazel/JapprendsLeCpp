#include "Table.h"
#include <iostream>

#define RANGE 20

using namespace std;

Table::Table(int number) {
    this->tableInt = number;
}

int *Table::getTable() {
    static int tableResult[RANGE];
    for (int i = 1; i <= RANGE; i++) {
        tableResult[i] = i * this->tableInt;
    }
    return tableResult;
}

void Table::printTable(int *table) {
    for (int i = 1; i <= RANGE ; ++i) {
        cout << this->tableInt << "*" << i << "=" << i*table[i] << endl;
    }
}
