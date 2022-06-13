#ifndef JAPPRENDSLECPP_TABLE_H
#define JAPPRENDSLECPP_TABLE_H


class Table {
public:
    Table(int number);
    int *getTable();
    void printTable(int *table);

private:
    int tableInt;
};


#endif //JAPPRENDSLECPP_TABLE_H