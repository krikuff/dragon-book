#pragma once

#include <lexer/token.h>

namespace dragon_book
{

class Float final : public Token
{
public:
    Float(float value);

private:
    float value_;
};

} // namespace dragon_book
