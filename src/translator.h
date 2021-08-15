#pragma once

namespace dragon_book
{

class Parser final
{
public:
    Parser();

    ~Parser() = default;

    void Expr();

    void Term();

    void Match(char terminal);

private:
    char lookahead_;
};

} // namespace dragon_book
