#include "User.h"

User::User(int id, const std::string& name) : id(id), name(name) {}

int User::getId() {
    return id;
}

std::string User::getName() {
    return name;
}