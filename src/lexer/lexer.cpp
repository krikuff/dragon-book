#include <lexer/lexer.h>

#include <iostream>

#include <lexer/number.h>
#include <lexer/tags.h>
#include <lexer/word.h>

namespace dragon_book
{

Lexer::Lexer()
{
    Reserve(Word{ Tag::True,  "true" });
    Reserve(Word{ Tag::False, "false" });
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreturn-type"

std::shared_ptr<Token> Lexer::Scan()
{
    for( ; ; PeekNext())
    {
        if(peek_ == ' ' || peek_ == '\t')
        {
            continue;
        }
        else if(peek_ == '\n')
        {
            line_ += 1;
        }
        else
        {
            break;
        }
        
        // scan numbers
        if(std::isdigit(peek_))
        {
            int number = 0;
            do
            {
                int digit = peek_ - '0';
                number = 10 * number + digit;
                PeekNext();
            } while (std::isdigit(peek_));

            return std::make_shared<Token>( Number{number} );
        }

        // scan identifiers
        if(std::isalpha(peek_))
        {
            std::string buff;
            do
            {
                buff.push_back(peek_);
                PeekNext();
            } while (std::isalnum(peek_));

            auto known_word = words_.find(buff);
            if(known_word != words_.end())
            {
                return known_word->second;
            }

            auto new_word = std::make_shared<Token>( Word{Tag::Id, buff} );
            words_.emplace(buff, new_word);
            return new_word;
        }

        // scan comments
        if(peek_ == '/')
        {
            PeekNext();

            // //-type
            if(peek_ == '/')
            {
                while(PeekNext() != '\n')
                    ;
                line_ += 1;
            }
            else if (peek_ == '*') // /**/-type
            {
                while( !(PeekNext() == '*' && PeekNext() == '/') )
                    ;
                continue;
            } // otherwise it is division sign
        }

        auto token = std::make_shared<Token>(peek_);
        peek_ = ' ';
        return token;
    }
}

#pragma clang diagnostic pop

void Lexer::Reserve(Word const& word)
{
    words_.emplace(word.GetLexeme(), std::make_shared<Token>( word ));
}

char Lexer::PeekNext()
{
    std::cin.get(peek_);
    return peek_;
}

} // namespace dragon_book
