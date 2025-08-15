#include <stdio.h>
#include "headers/lexer.h"
#include "headers/parser.h"
#include "headers/semantic.h"
#include "headers/ir.h"
#include "headers/optimizer.h"
#include "headers/codegen.h"

int main() {
    const char* filename = "input.minilang";
    printf("\n===== Phase 1: Lexical Analysis =====\n");
    Token* tokens = lex(filename);

    printf("\n===== Phase 2: Syntax Analysis =====\n");
    ASTNode* ast = parse(tokens);

    printf("\n===== Phase 3: Semantic Analysis =====\n");
    if (!semanticCheck(ast)) {
        printf("Semantic errors found. Exiting.\n");
        return 1;
    }

    printf("\n===== Phase 4: Intermediate Code Generation =====\n");
    IRList* ir = generateIR(ast);

    printf("\n===== Phase 5: Optimization =====\n");
    optimizeIR(ir);

    printf("\n===== Phase 6: Code Generation =====\n");
    generateCode(ir);

    return 0;
}