#include "DataTable.hpp"

#include <iostream>
#include <vector>

DataTable::DataTable(){}


// TODO: constructor should set all keys in the map (all column names) and allocate vectors because we've already read them
DataTable::DataTable(unsigned long nRows):numberOfRows(nRows){}

DataTable::~DataTable(){}

std::map<std::string, std::vector<double>> DataTable::DoubleColumns() const {
    return doubleColumns;
}

void DataTable::addKey(const std::string& keyName)
{
    doubleColumns[keyName] = std::vector <double> (numberOfRows);
}

void DataTable::SetField(std::string columnName, unsigned long index, double value){

    doubleColumns[columnName][index] = value;
}
