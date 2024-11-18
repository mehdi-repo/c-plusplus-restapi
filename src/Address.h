#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
public:
    Address(int id, const std::string& street);
    int getId();
    std::string getStreet();

private:
    int id;
    std::string street;
};

#endif // ADDRESS_H