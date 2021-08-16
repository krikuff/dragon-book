#include <lexer/word.h>

namespace dragon_book
{

Word::Word(int tag, std::string const& lexeme)
    : Token(tag)
    , lexeme_(lexeme)
{}

std::string Word::GetLexeme() const
{
    return lexeme_;
}

} // namespace dragon_book
