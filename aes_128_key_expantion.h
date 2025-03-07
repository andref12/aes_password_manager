#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct{
    uint8_t byte1;
    uint8_t byte2;
    uint8_t byte3;
    uint8_t byte4;
    word * next_word;
} word;

uint8_t KeyExpansion(word *);

word * RotWord(word *);

word * SubWord(word *);