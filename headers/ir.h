#ifndef IR_H
#define IR_H
#include "parser.h"
typedef struct IRList {
    char* code;
    struct IRList* next;
} IRList;
IRList* generateIR(ASTNode* ast);
#endif