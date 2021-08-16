#include <iostream>

#include <parser/parser.h>

namespace book = dragon_book;

int main()
{
    try
    {
        book::Parser parser;
        parser.Expr();

        std::cout << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "\n"
                     "Error: " << e.what() << std::endl;

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
