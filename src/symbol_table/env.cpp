#include <symbol_table/env.h>

namespace dragon_book
{

Env::Env(std::unique_ptr<Env>&& prev)
    : prev_(std::move(prev))
{}

void Env::Put(std::string const& s, Symbol const& sym)
{
    table_.emplace(s, sym);
}

std::optional<Symbol> Env::Get(std::string const& key)
{
    if(auto ret = table_.find(key);
            ret != table_.end())
    {
        return { ret->second };
    }

    if(!prev_)
    {
        return std::nullopt;
    }

    // TODO: check if compiler optimises tail recursion here
    return prev_->Get(key); 
}

} // namespace dragon_book
