#ifndef PARSER_H
#define PARSER_H
#include "lexer.h"
typedef struct ASTNode {
    char* nodeType;
    struct ASTNode* left;
    struct ASTNode* right;
} ASTNode;
ASTNode* parse(Token* tokens);
#endif