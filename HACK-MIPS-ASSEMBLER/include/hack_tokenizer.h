#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef HACK_TOKENIZER_H
#define HACK_TOKENIZER_H


typedef enum{
    A_INSTRUCTION,
    C_INSTRUCTION,
    LABEL,
    IGNORE
} TokenType;

typedef struct{
    TokenType type;
    char value[100];
} Token;

Token tokenize(char *line);
char *trim(char *line);
#endif