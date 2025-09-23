#include <cstdio> // includes printf library
#include <iostream> //
#include <array> // includes array library
#include <string>

int main() {

    std::array<int, 5> car = {1,2,3,4,5};
    
    std::array<char, 8>  boat = {'h','i', ' ','t','h','e','r','e'};
    
    std::array<std::string, 2> squid_str = {"hi", "there"};
    
    std::printf("%i\n" ,car.at(1));
    
    std::printf("%c\n", boat.at(1));
    
    std::printf("%s\n", squid_str.at(0).c_str());
    
    return 0;
    
}