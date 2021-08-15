#include <cctype>
#include <iostream>
#include <stdexcept>

class Parser {
public:
    Parser() {
        std::cin.get(lookahead);
    }

    void expr() {
        term();
        while(true) {
            if(lookahead == '+') {
                match('+');
                term();
                std::cout << "+";
                continue;
            } else if(lookahead == '-') {
                match('-');
                term();
                std::cout << "-";
                continue;
            }
            return;
        }
    }

    void term() {
        if(std::isdigit(lookahead)) {
            std::cout << lookahead;
            match(lookahead);
        } else {
            throw std::runtime_error("syntax error 1");
        }
    }

    void match(char t) {
        if(lookahead == t) {
            std::cin.get(lookahead);
        } else {
            throw std::runtime_error("syntax error 2");
        }
    }

private:
    char lookahead;
};

int main() {
    Parser parser;
    parser.expr();
    std::cout << std::endl;
}
