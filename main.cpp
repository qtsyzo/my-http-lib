#include "httplib.h"
#include <iostream>

using namespace httplib;

extern "C" void start_server() {
    Server svr;

    svr.Get("/", [](const Request&, Response& res) {
        res.set_content("Hello from your custom .so!", "text/plain");
    });

    std::cout << "Server running on port 8080..." << std::endl;
    svr.listen("0.0.0.0", 8080);
}
