#include <stdio.h>
#include <stdint.h>

#include "aes_128_key_expantion.h"

uint8_t * AddRoundKey(uint8_t *);

uint8_t * SubBytes(uint8_t *);

uint8_t * ShiftRows(uint8_t *);

uint8_t * MixColums(uint8_t *);