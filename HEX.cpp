#include "HEX.h"
#include <string>


using std::string;



Hex::Hex(){
  colornameforHEX="null";
  hexnumber="null";
}

Hex::Hex(string name, string number){
  colornameforHEX=name;
  hexnumber=number;
}

string Hex::getnumber(){
  return hexnumber;
}

string Hex::getname(){
  return colornameforHEX;
}