#pragma once

#include <memory>
#include <string>
#include <unordered_map>

#include <lexer/word.h>

namespace dragon_book
{

class Token;

class Lexer final
{
public:
    Lexer();

    ~Lexer() = default;

    std::shared_ptr<Token> Scan();

private:
    void Reserve(Word const& word);
    char PeekNext();

private:
    int line_;
    char peek_;
    std::unordered_map<
        std::string,
        std::shared_ptr<Token>
    > words_;
};

} // namespace dragon_book
