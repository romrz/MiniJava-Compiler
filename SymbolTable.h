#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

enum Type { INT, BOOL };

struct TableInfo {
  Type type;
  int value;
  vector<int> lines;
};

typedef unordered_map<string, TableInfo> SymbolTable;

ostream& operator<<(ostream &os, SymbolTable& table)
{
  // Obtiene la funcion hash
  SymbolTable::hasher fn = table.hash_function();
  
  os << endl << "Symbol Table" << endl << endl;
  for(auto& i : table)
  {
    os << i.first << ": "<< "{ " << i.second.type << ", " << i.second.value << ", ";

    for(int line : i.second.lines)
      os << line << " ";

    os << "}";

    // Imprime el valor de la funcion hash
    os << " " << fn(i.first) << endl;    
  }
}
