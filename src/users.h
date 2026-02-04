#include<iostream>
#include<string>

class Client{
  private:
    std::string name_;
    int DNI_;
    std::string birth_date_;
    int phone_;
    std::string address_;
  public:
    Client(std::string name, int DNI, std::string birth, int phone, std::string address): //max constructor
    name_{name}, DNI_{DNI}, birth_date_{birth}, phone_{phone}, address_{address} {}

    Client(): //default constructor
    name_{"Contado"}, DNI_{0}, birth_date_{""}, phone_{0}, address_{""} {}
};

class Seller{
  private:
    std::string name_;
    int DNI_;
    std::string birth_date_;
    int phone_;
    std::string address_;
  public:
    Seller(std::string name, int DNI, std::string birth, int phone, std::string address): //max constructor
    name_{name}, DNI_{DNI}, birth_date_{birth}, phone_{phone}, address_{address} {}
};

