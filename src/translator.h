#pragma once

namespace dragon_book
{

///@brief Simple infix to postfix form translator
class Parser final
{
public:
    ///@brief Constructor
    ///
    /// Reads from stdin
    Parser();

    ~Parser() = default;

    ///@brief Parse 'expr' and 'rest' nonterminals
    void Expr();

    ///@brief Parse terminals
    void Term();

    ///@brief Parse concrete terminal and read next symbol
    void Match(char terminal);

private:
    char lookahead_; ///< current symbol
};

} // namespace dragon_book
