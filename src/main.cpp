#include <cpprest/http_listener.h>
#include "RestAPI.h"

int main() {
    uri url(U("http://localhost:8080"));
    
    RestAPI api(url);
    
    api.start();
    
    // Keep the application running...
    
    return 0;
}