#include <lexer/token.h>

namespace dragon_book
{

Token::Token(int tag)
    : tag_(tag)
{}

int Token::GetTag() const
{
    return tag_;
}

} // namespace dragon_book
