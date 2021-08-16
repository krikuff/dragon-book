#include <lexer/number.h>

#include <lexer/tags.h>

namespace dragon_book
{

Number::Number(int value)
    : Token(Tag::Num)
    , value_(value)
{}

int Number::GetValue() const
{
    return value_;
}

} // namespace dragon_book
