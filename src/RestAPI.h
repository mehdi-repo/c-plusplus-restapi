#ifndef RESTAPI_H
#define RESTAPI_H

#include <cpprest/http_listener.h>
#include <cpprest/json.h>
#include "Database.h"

using namespace web;

class RestAPI {
public:
    RestAPI(const uri& url);
    void start();

private:
    void handleGetUsers(http_request request);
    
private:
    http_listener listener;
    Database db;
};

#endif // RESTAPI_H