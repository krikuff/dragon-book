#pragma once

namespace dragon_book
{

class Token
{
public:
    Token(int tag);

    virtual ~Token() = default;
    
    int GetTag() const;

private:
    int tag_;
};

} // namespace dragon_book
