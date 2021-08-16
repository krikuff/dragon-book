#include <iostream>

#include <parser/parser.h>

namespace book = dragon_book;

int main()
{
    try
    {
        book::Parser parser;
        parser.Expr();
    }
    catch(std::exception& e)
    {
        std::cout << "\n"
                     "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
