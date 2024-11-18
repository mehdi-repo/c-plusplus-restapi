#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database {
public:
    Database(const std::string& dbName);
    ~Database();
    bool execute(const std::string& sql);
    sqlite3* getConnection();

private:
    sqlite3* db;
};

#endif // DATABASE_H