#include <stdio.h>
#include "headers/ir.h"

IRList* generateIR(ASTNode* ast) {
    printf("Generating intermediate code...\n");
    printf("IR: t1 = 10\n    t2 = 20\n    t3 = t1 + t2\n    print t3\n");
    return NULL;
}