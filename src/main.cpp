#include <iostream>
#include "Poco/JWT/Token.h"

int main (int argc, char** argv)
 {
    Poco::JWT::Token token;
    std::cout << token.toString() << std::endl ;

    return 0;
 }