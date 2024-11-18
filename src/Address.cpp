#include "Address.h"

Address::Address(int id, const std::string& street) : id(id), street(street) {}

int Address::getId() {
    return id;
}

std::string Address::getStreet() {
    return street;
}