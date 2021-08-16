#pragma once

#include <lexer/token.h>

namespace dragon_book
{

class Number final : public Token
{
public:
    Number(int value);

    virtual ~Number() = default;

    int GetValue() const;

private:
    int value_;
};

} // namespace dragon_book
