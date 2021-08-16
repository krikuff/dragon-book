#pragma once

#include <string>

#include <lexer/token.h>

namespace dragon_book
{

class Word final : public Token
{
public:
    Word(int tag, std::string const& lexeme);

    virtual ~Word() = default;

    std::string GetLexeme() const;

private:
    std::string lexeme_;
};

} // namespace dragon_book
