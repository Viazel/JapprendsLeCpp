#include <iostream>
#include "Table.h"

using namespace std;

int main(){
    int input;
    cout << "Entrez un nombre:";
    cin >> input;
    Table table(input);
    table.printTable(table.getTable());
    return 0;
}