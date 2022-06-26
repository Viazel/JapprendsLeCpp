#ifndef JAPPRENDSLECPP_TABLE_H
#define JAPPRENDSLECPP_TABLE_H

class Table {

private:
    const int numberTable;
    int tableArray[10];

public:
    Table(const int table);
    const int* GetTable();
    void PrintTable();
};


#endif //JAPPRENDSLECPP_TABLE_H