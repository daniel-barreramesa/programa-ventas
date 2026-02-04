#include<iostream>
#include<string>
#include<vector>
#include"./stock/products.cc"
#include"users.cc"

class Invoice{
  private:
    int number_;
    std::string date_;
    std::vector<Product> products_;
    Seller seller_;
    Client Client_;
  public:
    Invoice();
};