#include "..\ParaKeyValue\ParaKeyValue.h"

int main() {
  setlocale(LC_ALL, "pl-PL");
  vector<Para<int, string>> vec{
    {1, "jeden"},  {5, "piêæ"}, {6, "szeœæ"},
    {4, "cztery"}, {2, "dwa"},    {3, "trzy"}
  };

  vector<Para<string, string>> dic{
    {"one", "jeden"}, {"five", "piêæ"}, {"six", "szeœæ"},
    {"four", "cztery"}, {"two", "dwa"}, {"three", "trzy"}
  };

  cout<<"\nKolekcja oryginalna\n";
  for(auto pkv: vec)
    cout<<pkv<<" ";
  cout<<endl;
 
  cout<<"\nKolekcja rosn¹ca wg klucza\n";
  sort(vec.begin(), vec.end(), cmpK<int,string>);
  for(auto pkv: vec)
    cout<<pkv<<" ";
  cout<<endl;

  cout<<"\nKolekcja rosn¹ca wg wartoœci\n";
  sort(vec.begin(), vec.end(), cmpV<int, string>);
  for(auto pkv: vec)
    cout<<pkv<<" ";
  cout<<endl;

  cout<<"\nKolekcja oryginalna\n";
  for(auto pkv: dic)
    cout<<pkv<<" ";
  cout<<endl;

  cout<<"\nKolekcja rosn¹ca wg klucza\n";
  sort(dic.begin(), dic.end(), cmpK<string, string>);
  for(auto pkv: dic)
    cout<<pkv<<" ";
  cout<<endl;

  cout<<"\nKolekcja rosn¹ca wg wartoœci\n";
  sort(dic.begin(), dic.end(), cmpV<string, string>);
  for(auto pkv: dic)
    cout<<pkv<<" ";
  cout<<endl<<endl;
}
