#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

enum Type { INT, BOOL };

typedef struct {

  string id;
  Type type;
  int value;
  vector<int> lines;
  
} TableInfo;

typedef unordered_map<string, TableInfo> SymbolTable;


ostream& operator<<(ostream &os, SymbolTable& table)
{
  os << endl << "Symbol Table" << endl << endl;
  
  for(auto it = table.begin(); it != table.end(); it++)
  {
    os << it->first << ": "<< "{ "
	 << it->second.id<< ", "
	 << it->second.type << ", "
	 << it->second.value << ", ";

    for(int line : it->second.lines)
      os << line << " ";

    os << "}" << endl;
  }
}
