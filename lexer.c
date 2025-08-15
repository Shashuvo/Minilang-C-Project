#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/lexer.h"

Token* lex(const char* filename) {
    printf("Lexing file: %s\n", filename);
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Failed to open file");
        return NULL;
    }
    printf("Tokens:\n");
    char word[100];
    while (fscanf(file, "%s", word) != EOF) {
        printf("TOKEN: %s\n", word);
    }
    fclose(file);
    return NULL;
}