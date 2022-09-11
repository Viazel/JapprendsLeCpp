#pragma once
class Table
{

private:
	int* table;

public:

	Table(const int& number);
	~Table();
	void PrintTable() const;
	const int& GetTable(const int& number) const;
};