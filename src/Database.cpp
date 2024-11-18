#include "Database.h"
#include <iostream>

Database::Database(const std::string& dbName) {
    if (sqlite3_open(dbName.c_str(), &db)) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "Opened database successfully" << std::endl;
    }
}

Database::~Database() {
    sqlite3_close(db);
}

bool Database::execute(const std::string& sql) {
    char* errMsg;
    if (sqlite3_exec(db, sql.c_str(), nullptr, 0, &errMsg) != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

sqlite3* Database::getConnection() {
    return db;
}