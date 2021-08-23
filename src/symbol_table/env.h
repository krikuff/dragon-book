#pragma once

#include <memory>
#include <optional>
#include <string>
#include <unordered_map>

#include <symbol_table/symbol.h>

namespace dragon_book
{

class Env
{
public:
    Env() = default;

    explicit Env(std::unique_ptr<Env>&& prev);

    void Put(std::string const& s, Symbol const& sym);

    std::optional<Symbol> Get(std::string const& key);

private:
    std::unordered_map<std::string, Symbol> table_;
    std::unique_ptr<Env> prev_;
};

} // namespace dragon_book
