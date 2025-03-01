#include <iostream>
#include <httplib.h>
#include <filesystem>

int main()
{
    const std::filesystem::path public_path = "../../resources/public";

    if (!std::filesystem::exists(public_path))
    {
        std::cerr << "Current path: " << std::filesystem::current_path() << '\n';
        std::cerr << "Public does not exist: " << public_path << std::endl;
        return EXIT_FAILURE;
    }

    httplib::Server server;
    server.set_mount_point("/", public_path.string());

    std::cout << "STARTED" << std::endl;

    server.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello World!", "text/plain");
    });

    server.listen("0.0.0.0", 8080);

    return EXIT_SUCCESS;
}
