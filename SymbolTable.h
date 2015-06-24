#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#define INT 1
#define BOOL 2
#define VOID 3
#define ARRAYINT 4
#define ARRAYBOOL 5

struct TableInfo {
  int type;
  int value;
  vector<int> lines;
};

typedef unordered_map<string, TableInfo> SymbolTable;

ostream& operator<<(ostream &, SymbolTable&);

#endif
