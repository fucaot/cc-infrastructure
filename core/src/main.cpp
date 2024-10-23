#include <iostream>
#include <engine/calculate.h>
#include <nlohmann/json.hpp>


struct Xact
{
public:

    int x;

    int y;

    Xact(int x = 0, int y = 0): x(x), y(y) {}
};

int main()
{
    std::cout << "hello" << std::endl;
    std::cout << engine::test() << std::endl;

    std::shared_ptr<int> ip(new int(11));
    std::shared_ptr<int> ip3(ip);

    std::shared_ptr<Xact> ip2  = std::make_shared<Xact>(1, 2);


    // nlohmann::json::par
}
