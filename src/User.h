#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(int id, const std::string& name);
    int getId();
    std::string getName();

private:
    int id;
    std::string name;
};

#endif // USER_H