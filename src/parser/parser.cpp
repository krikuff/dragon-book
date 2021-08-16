#include <parser/parser.h>

#include <cctype>
#include <iostream>
#include <stdexcept>

namespace dragon_book
{

Parser::Parser()
{
    std::cin.get(lookahead_);
}

void Parser::Expr()
{
    Term();
    while(true)
    {
        if(lookahead_ == '+')
        {
            Match('+');
            Term();
            std::cout << "+";
            continue;
        }
        else if(lookahead_ == '-')
        {
            Match('-');
            Term();
            std::cout << "-";
            continue;
        }
        return;
    }
}

void Parser::Term()
{
    if(std::isdigit(lookahead_))
    {
        std::cout << lookahead_;
        Match(lookahead_);
    }
    else
    {
        throw std::runtime_error("Attempt to scan non-digit terminal!");
    }
}

void Parser::Match(char terminal)
{
    if(lookahead_ == terminal)
    {
        std::cin.get(lookahead_);
    }
    else
    {
        throw std::runtime_error("Incorrect symbol!");
    }
}


} // namespace dragon_book
