#ifndef HEX_H
#define HEX_H
#include <string>

using std::string;


class Hex
{
  private: 
    string colornameforHEX;
    string hexnumber;
  
  public: 
    Hex();
    Hex(string name, string number);
    string getname();
    string getnumber();

   
    
};
#endif