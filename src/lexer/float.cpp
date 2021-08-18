#include <lexer/float.h>

#include <lexer/tags.h>

namespace dragon_book
{

Float::Float(float value)
    : Token(Tag::FloatNum)
    , value_(value)
{}

} // namespace dragon_book
