#include<iostream>
#include<string>

class Product{
  private:
    std::string name_;
    int code_;
    std::string description_;
    int stock_;
    std::string notes_;
  public:
    Product(std::string name, int code, std::string description, int stock, std::string notes): //max constructor
    name_{name}, code_{code}, description_{description}, stock_{stock}, notes_{notes} {}
};