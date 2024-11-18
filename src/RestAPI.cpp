#include "RestAPI.h"
#include <iostream>

RestAPI::RestAPI(const uri& url) : listener(url), db("users.db") {
    listener.support(methods::GET, std::bind(&RestAPI::handleGetUsers, this, std::placeholders::_1));
}

void RestAPI::start() {
    listener.open().then([this](){ 
        std::cout << "Starting to listen at: " << listener.uri().to_string() << std::endl; 
    }).wait();
}

void RestAPI::handleGetUsers(http_request request) {
    json::value responseData;

    // Fetch users from the database and populate responseData...

    request.reply(status_codes::OK, responseData);
}