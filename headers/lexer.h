#ifndef LEXER_H
#define LEXER_H
typedef struct Token {
    char* lexeme;
    int type;
} Token;
Token* lex(const char* filename);
#endif